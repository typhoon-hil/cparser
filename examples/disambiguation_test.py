from cparser import CParser

# I would expect fn(x) to get parsed as a postfix_exp 
# but instead it gets parsed as a decl (matching typedef_name)
# Should disambiguate be called for typedef_name-primary_exp ambiguity because the grammar is defined as:
# typedef_name : id {dynamic};
# primary_exp  : var_ref=id {dynamic} 
#              |...
#              ;
# before the decl_body action gets called?

code = """
void fn(int a) {
}

int main() {
    int x;
    fn(x);
}
"""

def main():
    cparser = CParser()
    ast = cparser.parse(code)
    print(ast.to_str())


    """
    ...
    external_decl[21->57]
      function_definition[21->57]
        decl_specs[21->24]
          decl_specs_g1_1[21->24]
            decl_specs_g1[21->24]
              type_spec[21->24]
                int[21->24, "int"]
        declarator[25->31]
          pointer_opt[25->25]
          direct_declarator[25->31]
            direct_declarator[25->29]
              id[25->29, "main"]
            ([29->30, "("]
            )[30->31, ")"]
        compound_stat[32->57]
          {[32->33, "{"]
          block_item_0[38->55]
            block_item_1[38->55]
              block_item_1[38->44]
                block_item[38->44]
                  decl[38->44]
                    decl_body[38->43]
                      decl_specs[38->41]
                        decl_specs_g1_1[38->41]
                          decl_specs_g1[38->41]
                            type_spec[38->41]
                              int[38->41, "int"]
                      init_declarator_list_opt[42->43]
                        init_declarator_list[42->43]
                          init_declarator_1_comma[42->43]
                            init_declarator[42->43]
                              declarator[42->43]
                                pointer_opt[42->42]
                                direct_declarator[42->43]
                                  id[42->43, "x"]
                    ;[43->44, ";"]
              block_item[49->55]
                decl[49->55]
                  decl_body[49->54]
                    decl_specs[49->51]
                      decl_specs_g1_1[49->51]
                        decl_specs_g1[49->51]
                          type_spec[49->51]
                            typedef_name[49->51]
                              id[49->51, "fn"]
                    init_declarator_list_opt[51->54]
                      init_declarator_list[51->54]
                        init_declarator_1_comma[51->54]
                          init_declarator[51->54]
                            declarator[51->54]
                              pointer_opt[51->51]
                              direct_declarator[51->54]
                                ([51->52, "("]
                                declarator[52->53]
                                  pointer_opt[52->52]
                                  direct_declarator[52->53]
                                    id[52->53, "x"]
                                )[53->54, ")"]
                  ;[54->55, ";"]
          }[56->57, "}"]
    """


if __name__ == "__main__":
    main()

