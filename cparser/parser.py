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

        def dynamic_disambig_filter(context, action, subresults):
            """Filter for dynamic disambiguation

            Solves problems with following disambiguations:
                * typedef_name
                * primary_exp
                * iteration_stat

            typedef_name & primary_exp disambiguations
            ------------------------------------------
            Whenever the REDUCE is called on typedef_name or primary_exp rule,
            we first check if the ID that is trying to be reduced is actually a
            user-defined type (struct, union, typedef). If yes, than the REDUCE
            will be called.

            iteration_stat disambiguation
            -----------------------------
            Handles the case where for loop contains declarations inside init
            block. For example:
                for (int i = 0; ...)

            Disambiguity happens because part `i = 0` can be recognized
            both as exp_opt and init_declarator_list_opt. In this case, part
            `i = 0` is always reduced to init_declarator_list_opt rule.
            """
            if action is None:
                return

            production = context.production

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
                              dynamic_filter=dynamic_disambig_filter,
                              actions=self._setup_actions(),
                              lexical_disambiguation=True)

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
            def collect_direct_decl_name(init_dcl):
                """Adds the name of direct declarator into the set of
                user-defined types"""
                declarator = init_dcl.children[0]

                if isrule(declarator.children[0], "direct_declarator"):
                    direct_declarator = declarator.children[0]
                else:
                    # in case of pointer, declarator is a second
                    # child
                    direct_declarator = declarator.children[1]

                if isinstance(direct_declarator.children[0], NodeTerm):
                    value = direct_declarator.children[0].value
                    self.user_defined_types.add(value)

            def recurse_init_decl(init_dcl):
                """Recurses through the init declarator rule."""
                if len(init_dcl.children) > 1:

                    # last child is always direct declarator
                    collect_direct_decl_name(init_dcl.children[-1])
                    # first child is always recursive init_declarator_1_comma
                    recurse_init_decl(init_dcl.children[0])
                else:
                    collect_direct_decl_name(init_dcl.children[0])

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
                        recurse_init_decl(init_decl)

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

        results = self._glr.parse(code)
        return results[0]

    def parse_file(self, file_path, use_cpp=False, cpp_path="cpp",
                   cpp_args=None, debug=False):
        """Parses content from the given file."""
        # self.user_defined_types = set()
        # self._glr.debug = debug

        if use_cpp:
            content = preprocess_file(file_path, cpp_path, cpp_args)
        else:
            with open(file_path) as f:
                content = f.read()

        return self.parse(content, debug)


def isrule(non_term, rule_name):
    """Helper function. Return `True` if given NodeNonTerm matches
    has a given name."""
    if isinstance(non_term, NodeNonTerm):
        return non_term.production.symbol.fqn == rule_name
    return False


def preprocess_file(file_path, cpp_path, cpp_args=None):
    """Preprocess a file using C preprocessor

    Args:
        file_path (str): path to a file that is being parsed
        cpp_path (str): path to a C preprocessor
        cpp_args (list): list of args for the preprocessor
    """
    import subprocess
    import tempfile

    cwd = os.path.dirname(os.path.realpath(file_path))
    command = [cpp_path]

    if cpp_args and isinstance(cpp_args, list):
        command.extend(cpp_args)
    elif cpp_args is None:
        command.append(get_default_pp_args())

    command.append(file_path)

    f = tempfile.NamedTemporaryFile(mode="w+", suffix=".c", delete=False)
    command.extend(["-o", f.name])

    # do not show command prompt when running subprocess on Windows.
    params = dict()
    if os.name == 'nt':
        startupinfo = subprocess.STARTUPINFO()
        startupinfo.dwFlags |= subprocess.STARTF_USESHOWWINDOW
        params['startupinfo'] = startupinfo

    p = subprocess.Popen(
        command,
        cwd=cwd,
        stdin=subprocess.PIPE,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
        **params
    )
    _, sterr = p.communicate()
    sterr = sterr.decode(encoding="utf-8")
    retcode = p.returncode

    if sterr != "" or retcode != 0:
        f.close()
        os.unlink(f.name)
        raise RuntimeError("Failed to invoke preprocessor! %s" % sterr)

    code = f.read()
    f.close()
    os.unlink(f.name)

    return code


def get_default_pp_args():
    """Returns the default arg for the preprocessor in a format:

    -I<path_to_the_fake_includes>
    """
    this_file = os.path.realpath(os.path.dirname(__file__))
    root_path = os.path.split(os.path.abspath(os.path.join(this_file)))[0]
    include_path = os.path.join(root_path, "utils", "fake_libc_include")
    return "-I%s" % include_path
