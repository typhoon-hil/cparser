from cparser.visitor import ASTVisitor


def test_id_visitor(parser):
    """Tests visitor for the `id` rule in grammar."""

    code = """
    struct Complex {
        int complex_number;

        struct Simple {
            int simple_number;
        } s;
    };

    typedef Complex complex_type;
    """

    ast = parser.parse(code)

    class IDVisitor(ASTVisitor):

        def __init__(self):
            super(IDVisitor, self).__init__()
            self.found_ids = []

        def visit_id(self, node):
            self.found_ids.append(node.value)
            return node

    visitor = IDVisitor()
    visitor.visit(ast)
    assert len(visitor.found_ids) == 7


def test_struct_or_union_spec(parser):
    """Tests visitor for the `struct_or_union_spec` rule in grammar."""

    code = """
    struct Complex {
        int complex_number;

        struct Simple {
            int simple_number;
        } s;
    };

    typedef Complex complex_type;
    """

    ast = parser.parse(code)

    class StructVisitor(ASTVisitor):

        def __init__(self):
            super(StructVisitor, self).__init__()
            self.found_structs = []

        def visit_struct_or_union_spec(self, node):
            self.found_structs.append(node)
            return node

    visitor = StructVisitor()
    visitor.visit(ast)

    assert len(visitor.found_structs) == 2


def test_id_renaming(parser):
    """Tests visitor that renames the id's."""

    code = """
    typedef struct {
        int element;
        int weight;
    } Atom;

    Atom helium;
    """
    ast = parser.parse(code)

    class IDVisitor(ASTVisitor):
        """Visitor that collects all identifiers in the code."""
        def __init__(self):
            super(IDVisitor, self).__init__()
            self.found_ids = []

        def visit_id(self, node):
            self.found_ids.append(node.value)
            return node

    class RenameIDVisitor(ASTVisitor):
        """Visitor that renames all identifiers in the code."""
        def __init__(self):
            super(RenameIDVisitor, self).__init__()
            self.found_ids = []

        def visit_id(self, node):
            node.token.value = "new_%s" % node.token.value
            return node

    # Rename all identifiers.
    rename_visitor = RenameIDVisitor()
    ast = rename_visitor.visit(ast)

    # Collect all identifiers and check if they're renamed.
    check_visitor = IDVisitor()
    check_visitor.visit(ast)

    for identifier in check_visitor.found_ids:
        assert identifier.startswith("new_")
