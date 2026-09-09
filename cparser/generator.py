from cparser.visitor import ASTVisitor
from parglare import pos_to_line_col


class CodeGenerator(ASTVisitor):
    """Generates C code from the given AST"""
    def __init__(
        self,
        emit_line_directives=False,
        original_source_code='',
        line_adjust=0,
        line_file_prefix='',
    ):
        self.emit_line_directives = emit_line_directives
        self.original_source_code = original_source_code
        self.line_adjust = line_adjust
        self.line_file_prefix = line_file_prefix

        self.indent = 0
        self.current_line = 0

    def _add_indent(self):
        return " " * self.indent

    def generate(self, ast, output_path=None):
        code = self.visit(ast)
        return code

    def visit(self, node):
        def _visit_internal(node):
            visitor = "visit_%s" % node.symbol.name

            if hasattr(self, visitor):
                return getattr(self, visitor)(node)
            else:
                return self._generic_visit(node)

        return self._wrap_emit_line(node, _visit_internal)

    def _generic_visit(self, node):
        if not node:
            return ""

        if hasattr(node, "children") and node.children is not None:
            return " ".join(self.visit(c) for c in node.children)
        else:
            return self._wrap_emit_line(node, lambda n: n.value)

    def _wrap_emit_line(self, node, callback):
        code_result = callback(node)

        emit_line_directive = False

        if self.emit_line_directives:
            node_line, node_col = pos_to_line_col(
                self.original_source_code, node.context.start_position
            )

            adj_line = node_line - self.line_adjust

            if adj_line > self.current_line:
                self.current_line = adj_line
                emit_line_directive = True

        if emit_line_directive:
            return f'\n# {self.current_line} "{self.line_file_prefix}"\n{code_result}'
        else:
            return code_result

    def visit_id(self, node):
        return node.value

    def visit_decl(self, node):
        return self.visit(node.children[0]) + ";\n"

    def visit_decl_specs(self, node):
        return " ".join(self.visit(c) for c in node.children) + " "

    def visit_declarator(self, node):
        if len(node.children) == 2:  # pointer direct_declarator
            pointer = self.visit(node.children[0])
            declarator = self.visit(node.children[1])
            return "%s%s" % (pointer, declarator)
        return self.visit(node.children[0])

    def visit_init_declarator(self, node):
        ret = self.visit(node.children[0])
        if len(node.children) == 1:
            return ret

        ret += " = " + self.visit(node.children[2])
        return ret

    def visit_struct_or_union_spec(self, node):
        return " ".join(self.visit(c) for c in node.children)

    def visit_enum_spec(self, node):
        return " ".join(self.visit(c) for c in node.children)

    # def visit_struct_declarator_list(self, node):
    #     if len(node.children) != 1:
    #         ret = self.visit(node.children[0])
    #         ret = ",\n"
    #         ret = self.visit(node.children[2])
    #         return ret
    #
    #     return self.visit(node.children[0])

    def visit_spec_qualifier_list(self, node):
        return " ".join(self.visit(c) for c in node.children) + " "

    def visit_struct_decl_list(self, node):
        return "".join(self._generate_stat(c) for c in node.children)

    def visit_compound_stat(self, node):
        children = node.children
        ret = "%s{" % self._add_indent()
        self.indent += 4

        if len(children) == 3:
            block_item_list = children[1]
            ret += "".join(self._generate_stat(b)
                           for b in block_item_list.children)

        self.indent -= 4
        ret += "}"
        return ret

    def visit_iteration_stat(self, node):
        iter_name = node.children[0].value

        if iter_name == "while":
            ret = "while ("
            ret += self.visit(node.children[2])  # visit exp
            ret += ")"
            ret += self._generate_stat(node.children[4])  # visit stat
            return ret

        return self._generic_visit(node)

    def visit_jump_stat(self, node):
        ret = " ".join(self.visit(c) for c in node.children[:-1])
        return ret + ";"

    def visit_line_directive(self, node):
        return ""

    def _generate_stat(self, node):
        if node.symbol.name == "compound_stat":
            return self.visit(node)
        else:
            return self._add_indent() + self.visit(node)
