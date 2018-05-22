from cparser.visitor import ASTVisitor


class CodeGenerator(ASTVisitor):
    """Generates C code from the given AST"""

    def generate(self, ast, id_prefix=None, output_path=None, debug=False):
        self.id_prefix = id_prefix
        code = self.visit(ast, debug)

        print(code)

    def visit(self, node, debug=False):
        visitor = "visit_%s" % node.symbol.name

        if hasattr(self, visitor):
            return getattr(self, visitor)(node)
        else:
            return self._generic_visit(node, debug)

    def _generic_visit(self, node, debug):
        if not node:
            return ""

        if hasattr(node, "children"):
            return "".join(self.visit(c) for c in node.children)
        else:
            return node.value

    def visit_id(self, node):
        value = node.value

        if self.id_prefix:
            value = "%s%s" % (self.id_prefix, value)

        return value
