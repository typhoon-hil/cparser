import os
from parglare import GLRParser, Grammar, NodeNonTerm, NodeTerm, REDUCE


class CParser:

    def __init__(self):
        self._glr = None
        self._setup_parser()

        self.user_defined_types = set()

    def _setup_parser(self):
        """Setup parser."""
        file_path = os.path.realpath(os.path.dirname(__file__))
        root_path = os.path.split(os.path.abspath(os.path.join(file_path)))[0]
        grammar_path = os.path.join(root_path, "cparser", "cgrammar.pg")

        grammar = Grammar.from_file(grammar_path)

        def typedef_filter(action, token, production, subresults, state,
                           context):
            """Filter for dynamic disambiguation

            Solves problems with typedef_name disambiguation. Whenever the
            REDUCE is called on typedef_name rule, we first check if the
            ID that is trying to be reduced is actually a user-defined type
            (struct, union, typedef). If yes, than the REDUCE will be called.

            """
            if action is None:
                return

            if action is REDUCE and production.symbol.fqn == "typedef_name":

                var_name = subresults[0].value
                if var_name not in self.user_defined_types:
                    return False

            if action is REDUCE and production.symbol.fqn == "primary_exp":
                child = subresults[0]
                if child.symbol.fqn == "id":
                    if child.value in self.user_defined_types:
                        return False

            if action is REDUCE and production.symbol.fqn == "iteration_stat":
                if isrule(subresults[2], "decl_body"):
                    init_declarator_list_opt = subresults[2].children[1]
                    if len(init_declarator_list_opt.children) == 0:
                        return False

            return True

        self._glr = GLRParser(grammar, build_tree=True,
                              call_actions_during_tree_build=True,
                              dynamic_filter=typedef_filter,
                              actions=self._setup_actions(),
                              ws='\n\r\t ')

    def _setup_actions(self):
        """Creates a dict of semantic actions that will be called during
        parsing

        Returns:
            dict
        """

        def decl_body(_, nodes):
            """Semantic action called for every decl_body production

            This semantic action is used to collect every user-defined type in
            a code. This includes structs, unions and typedefs.
            """
            decl_specs = nodes[0]

            first_el = decl_specs.children[0]
            if isrule(first_el, "storage_class_spec"):

                if first_el.children[0].value == "typedef":
                    # If the current decl_specs is definition of custom type by
                    # using 'typedef', get the name of the defined type.
                    init_decl_list_opt = nodes[1]
                    if not init_decl_list_opt.children:
                        return

                    init_decl_list = init_decl_list_opt.children[0]
                    for init_decl in init_decl_list.children:
                        declarator = init_decl.children[0]

                        if isrule(declarator.children[0], "direct_declarator"):
                            direct_declarator = declarator.children[0]
                        else:
                            # in case of pointer, declarator is a second
                            # child
                            direct_declarator = declarator.children[1]

                        if isinstance(direct_declarator.children[0], NodeTerm):
                            value = direct_declarator.children[0].value
                            self.user_defined_types.add(value)

            # Productions that start with type_spec
            if isrule(first_el, "type_spec"):
                type_spec_children = first_el.children
                ts_first = type_spec_children[0]

                if isrule(ts_first, "struct_or_union_spec"):
                    struct_name = ts_first.children[1].value
                    self.user_defined_types.add(struct_name)

        return {
            "decl_body": decl_body
        }

    def parse(self, code, debug=False):
        """Parses the given code string."""
        self.user_defined_types = set()
        self._glr.debug = debug

        return self._glr.parse(code)

    def parse_file(self, file_path, debug=False):
        """Parses content from the given file."""
        self.user_defined_types = set()
        self._glr.debug = debug
        
        return self._glr.parse_file(file_path)


def isrule(non_term, rule_name):
    """Helper function. Return `True` if given NodeNonTerm matches
    has a given name."""
    if isinstance(non_term, NodeNonTerm):
        return non_term.production.symbol.fqn == rule_name
    return False