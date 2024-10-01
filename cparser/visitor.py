
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
        if hasattr(node, "children") and node.children is not None:
            for c in node.children:
                self.visit(c, debug)


class RenameVisitor(ASTVisitor):
    def __init__(self, decls, var_refs, prefix="new_"):
        self.decls = decls
        self.var_refs = var_refs
        self.prefix = prefix

    def visit_direct_declarator(self, node):
        pos = (node.context.start_position, node.context.end_position)
        if pos in self.decls:
            node.children[0].token.value = f"{self.prefix}{node.children[0].value}"

    def visit_primary_exp(self, node):
        pos = (node.context.start_position, node.context.end_position)
        if pos in self.var_refs:
            id_term = node.children[0]
            id_term.token.value = f"{self.prefix}{id_term.token.value}"

    def visit_type_spec(self, node):
        pos = (node.context.start_position, node.context.end_position)
        for decl in self.decls.values():
            if decl.type_spec_pos == pos and not decl.simple_type:
                child_node = node.children[0]
                if child_node.symbol.name == "struct_or_union_spec":
                    id_term = child_node.children[1]
                    id_term.token.value = f"{self.prefix}{id_term.token.value}"
                else:
                    if hasattr(child_node, "children"):
                        id_term = child_node.children[0]
                        id_term.token.value = f"{self.prefix}{id_term.token.value}"
                    else:
                        child_node.token.value = f"{self.prefix}{child_node.token.value}"
                break

    def visit_typedef_name(self, node):
        pos = (node.context.start_position, node.context.end_position)

        for decl in self.decls.values():
            if pos == decl.pos:
                node.children[0].token.value = f"{self.prefix}{node.children[0].value}"
                break


    def visit_struct_or_union_spec(self, node):
        pos = (node.context.start_position, node.context.end_position)
        if pos in self.decls:
            node.children[1].token.value = f"{self.prefix}{node.children[1].value}"