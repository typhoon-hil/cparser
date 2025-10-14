import os
from itertools import islice
from typing import Callable, List, TypeVar

from parglare import GLRParser, Grammar, NodeNonTerm, NodeTerm
from parglare.glr import Parent
from parglare.trees import tree_node_iterator, visitor

BUILTIN_TYPES = (
    "void",
    "char",
    "short",
    "int",
    "long",
    "float",
    "double",
    "signed",
    "unsigned",
    "_Bool",
    "_Complex",
)
TYPE_DEFINED = 0
TYPE_UNDEFINED = 1
TYPE_MAYBE_UNDEFINED = 2


class Declaration:
    """Declaration object

    This object is created for every declaration of interest in semantic
    actions.
    """

    def __init__(self):
        self.storage_spec = None
        self.type_spec = None
        self.type_qual = None
        self._name = None
        self.pos = None
        self.type_spec_pos = None
        self.type_status = TYPE_DEFINED

    @property
    def name(self):
        if self._name:
            return self._name
        if self.type_spec.__class__.__name__ == "struct_or_union_spec":
            return self.type_spec.id
        return ""

    @name.setter
    def name(self, name):
        self._name = name

    def __repr__(self):
        if self.type_spec.__class__.__name__ == "struct_or_union_spec":
            return f"struct|union {self.type_spec.id}"

        return f"{self.type_spec} {self.name}"

    @property
    def is_typedef(self):
        return self.storage_spec == "typedef"

    @property
    def is_class(self):
        if hasattr(self.type_spec, "is_class"):
            return self.type_spec.is_class

        if hasattr(self.type_spec, "struct_type"):
            return self.type_spec.struct_type == "class"

        return False

    @property
    def simple_type(self):
        return self.type_spec in BUILTIN_TYPES

    @property
    def type_defined(self):
        return self.type_status == TYPE_DEFINED


class CParser:

    def __init__(self):
        self._glr = None
        self._setup_parser()

        self.user_defined_types = set()
        self.declarations = {}
        self.var_refs = {}
        self.functions = {}

    def _setup_parser(self):
        """Setup parser."""
        file_path = os.path.realpath(os.path.dirname(__file__))
        root_path = os.path.split(os.path.abspath(os.path.join(file_path)))[0]
        grammar_path = os.path.join(root_path, "cparser", "cgrammar.pg")

        grammar = Grammar.from_file(grammar_path)

        self._glr = GLRParser(
            grammar,
            build_tree=True,
            call_actions_during_tree_build=True,
            actions=self._setup_actions(),
            lexical_disambiguation=True,
        )

    def reset_parser(self):
        self.user_defined_types = set()
        self.declarations = {}
        self.var_refs = {}
        self.functions = {}

    def _setup_actions(self):
        """Creates a dict of semantic actions that will be called during
        parsing

        Returns:
            dict
        """

        def primary_exp(context, nodes, var_ref=None):
            pos = (context.start_position, context.end_position)
            if var_ref is not None:
                self.var_refs[pos] = var_ref

        def decl_body(context, nodes, decl_specs, init_decl_list):
            """Semantic action called for every decl_body production

            This semantic action is used to collect every user-defined type in
            a code. This includes structs, unions and typedefs.
            """
            def process_declaration(d):
                declaration = Declaration()
                ddeclarator = d.decl.dd
                pos = (ddeclarator._pg_start_position, ddeclarator._pg_end_position)
                if hasattr(ddeclarator, "name"):
                    declaration.name = ddeclarator.name
                if hasattr(ddeclarator, "array"):
                    while not hasattr(ddeclarator.array, "name"):
                        ddeclarator = ddeclarator.array
                    declaration.name = ddeclarator.array.name
                    pos = (
                        ddeclarator.array._pg_start_position,
                        ddeclarator.array._pg_end_position,
                    )
                declaration.pos = pos
                return declaration

            if not init_decl_list:
                init_decl_list = []

            for d in init_decl_list:
                declaration = process_declaration(d)
                for spec in decl_specs:
                    if hasattr(spec, "storage_spec") and spec.storage_spec is not None:
                        declaration.storage_spec = spec.storage_spec
                        if spec.storage_spec == "typedef":
                            self.user_defined_types.add(declaration.name)

                    if hasattr(spec, "type_spec") and spec.type_spec is not None:
                        type_spec_pos = (spec._pg_start_position, spec._pg_end_position)
                        try:
                            type_spec = spec.type_spec.id
                            declaration.type_spec = spec.type_spec
                            type_spec_pos = (spec.type_spec._pg_start_position,
                                             spec.type_spec._pg_end_position)
                            self.user_defined_types.add(type_spec)
                        except AttributeError:
                            type_spec = spec.type_spec
                            declaration.type_spec = type_spec

                        declaration.type_spec_pos = type_spec_pos
                        if (
                            type_spec not in BUILTIN_TYPES
                            and type_spec not in self.user_defined_types
                            and not declaration.is_typedef
                        ):
                            declaration.type_status = TYPE_MAYBE_UNDEFINED

                        # Add type to user defined types to avoid ambiguities.
                        if not declaration.simple_type:
                            self.user_defined_types.add(type_spec)

                    if hasattr(spec, "type_qual") and spec.type_qual is not None:
                        declaration.type_qual = spec.type_qual

                self.declarations[declaration.pos] = declaration

        def function_definition(
            context, nodes, declarator, decl_specs=None, decl_list=None, body=None
        ):
            pos = (context.start_position, context.end_position)
            self.functions[pos] = declarator.dd.fnc_decl.name

        return {
            "decl_body": decl_body,
            "primary_exp": primary_exp,
            "function_definition": function_definition,
        }

    def parse(self, code, debug=False):
        """Parses the given code string."""
        self.reset_parser()
        self._glr.debug = debug

        forest = self._glr.parse(code)
        # Use this to diff trees and investigate ambiguities
        # for idx, tree in islice(enumerate(forest), 0, 5):
        #     with open(f'tree{idx}.ast', 'w') as f:
        #         f.write(tree.to_str())

        if debug:
            with open("debug.dot", "w") as f:
                f.write(forest.to_dot())

        forest.disambiguate(self.disambiguate_first_pass)

        # Collect user-defined types
        self._glr.call_actions(forest.get_first_tree())

        # Second pass disambiguation uses collected type information
        forest.disambiguate(self.disambiguate_second_pass)

        self._process_typedefs()
        self._process_var_refs()

        if debug:
            with open("debug2.dot", "w") as f:
                f.write(forest.to_dot())

        if len(forest) > 1:
            for idx, tree in islice(enumerate(forest), 0, 5):
                with open(f'tree{idx}.ast', 'w') as f:
                    f.write(tree.to_str())

        assert len(forest) == 1
        return forest.get_first_tree()

    def parse_file(
        self, file_path, use_cpp=False, cpp_path="cpp", cpp_args=None, debug=False
    ):
        """Parses content from the given file."""
        if use_cpp:
            content = preprocess_file(file_path, cpp_path, cpp_args)
        else:
            with open(file_path) as f:
                content = f.read()

        return self.parse(content, debug)

    def disambiguate_first_pass(self, parent):
        """Filter for dynamic disambiguation - first pass.

        Disambiguates context-free cases that don't require declared type
        information. This should remove all ambiguities in declarations.

        """
        # Use this to investigate ambiguities in this disambiguation call.
        # for idx, tree in enumerate(parent.possibilities):
        #     with open(f'ambig{idx}.ast', 'w') as f:
        #         f.write(tree.to_str())
        #
        def tree_size(root):
            """Returns number of nodes in the given tree."""
            if isinstance(root, NodeNonTerm):
                return sum(tree_size(c) for c in root.children)
            elif isinstance(root, NodeTerm):
                return 1
            elif isinstance(root, Parent):
                assert len(root.possibilities) == 1
                return tree_size(root.possibilities[0])
            else:
                Exception(f'tree_size called '
                            f'for invalid type: {root.__class__}')
            return 0


        T = TypeVar('T')

        def larger_tree_strategy(trees: List[T], get_tree_size: Callable) -> List[T]:
            """Strategy where disambiguation is done by choosing largest trees.

            Returns disambiguated trees list.

            """
            tree_sizes = list(sorted([(t, get_tree_size(t)) for t in trees],
                                key=lambda ts: ts[1], reverse=True))
            first_size = tree_sizes[0][1]
            return [t[0] for t in tree_sizes if t[1] == first_size]


        valid = parent.possibilities
        # Sanity check
        assert len(valid) > 1

        symbol_name = parent.production.symbol.name

        if symbol_name in ['decl_body', 'param_decl']:
            # Prefer declarations over type specification
            # E.g. we prioritize init_declarator_list over decl_specs for typedefs of
            # the form:
            # typedef A B;
            # where B should be recognized as init_declarator, not decl_spec.
            valid = larger_tree_strategy(valid, lambda t: tree_size(t.children[-1]))

        elif symbol_name == 'function_definition':
            # Prefer function_definition with larger declarator AST size
            def decl_tree_size(func_decl):
                """Returns declarator tree size"""
                declarator_index = 0
                try:
                    declarator_index = next(i for i, st in enumerate(func_decl.children)
                                            if st.production.symbol.name == 'declarator')
                except StopIteration:
                    return 0
                return tree_size(func_decl.children[declarator_index])

            valid = larger_tree_strategy(valid, lambda t: decl_tree_size(t))

        if len(valid) > 0:
            parent.possibilities = valid

    def disambiguate_second_pass(self, parent):
        """Use collected type information to prevent reduction of id to
        primary_exp if id is a valid type name.

        """

        class InvalidTree(Exception):
            pass

        def valid_tree(tree):
            def visit(node, __subresults, __depth):
                if node.symbol.name == 'primary_exp':
                    child_parent = node.children[0]
                    if len(child_parent.possibilities) == 1:
                        child_term = child_parent.possibilities[0]
                        if (child_term.is_term()
                            and child_term.token.value in self.user_defined_types):
                            raise InvalidTree
                elif node.symbol.name == 'typedef_name':
                    child_parent = node.children[0]
                    if len(child_parent.possibilities) == 1:
                        child_term = child_parent.possibilities[0]
                        if (child_term.is_term()
                            and child_term.token.value not in self.user_defined_types):
                            raise InvalidTree

            try:
                visitor(tree, tree_node_iterator, visit)
            except InvalidTree:
                return False
            return True

        parent.possibilities = list(filter(valid_tree, parent.possibilities))


    def _process_typedefs(self):
        """Replaces the typedef reference with Declaration object."""
        typedefs = []
        d = {}
        classes = {}
        for decl in self.declarations.values():
            d[decl.name] = decl
            if decl.storage_spec == "typedef":
                typedefs.append(decl)
            if decl.is_class:
                classes[decl.name] = decl

        for t in typedefs:
            if t.type_spec in d:
                t.type_spec = d[t.type_spec]

        for decl in self.declarations.values():
            if decl.type_status == TYPE_MAYBE_UNDEFINED:
                for t in typedefs:
                    if decl.type_spec == t.name:
                        # There is a match, so the type is valid
                        decl.type_status = TYPE_DEFINED

        for decl in self.declarations.values():
            if decl.type_spec in classes:
                decl.type_spec = classes[decl.type_spec]

    def _process_var_refs(self):
        """Replaces the variable reference with Declaration object."""
        from collections import defaultdict

        decl_names = defaultdict(list)
        for d in self.declarations.values():
            decl_names[d.name].append(d)

        invalid_refs = {}
        for pos, name in self.var_refs.items():
            if name in decl_names:
                self.var_refs[pos] = decl_names[name][0]
            else:
                # Invalid ref
                # self._var_refs[pos] = None
                invalid_refs[pos] = name
                # del self.var_refs[pos]

        for inv in invalid_refs:
            del self.var_refs[inv]

        return invalid_refs


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
    if os.name == "nt":
        startupinfo = subprocess.STARTUPINFO()
        startupinfo.dwFlags |= subprocess.STARTF_USESHOWWINDOW
        params["startupinfo"] = startupinfo

    p = subprocess.Popen(
        command,
        cwd=cwd,
        stdin=subprocess.PIPE,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
        **params,
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
