
class ASTVisitor(object):
    """A base class for visiting AST nodes

    In order to define custom visitors, subclass ASTVisitor and define
    custom visit_XXX functions, where XXX is the name of the grammar
    rule you want to visit.
    """

    def visit(self, node, debug=False):
        """Visit a node."""
        if debug:
            print("Visiting: %s" % node.symbol.name)

        visitor = "visit_%s" % node.symbol.name

        if hasattr(self, visitor):
            getattr(self, visitor)(node)

        self._generic_visit(node, debug)

        return node

    def _generic_visit(self, node, debug=False):
        """Called if no explicit visitor method is declared for a node."""
        if hasattr(node, "children"):
            for c in node.children:
                self.visit(c, debug)
