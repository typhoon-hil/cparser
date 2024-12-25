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
int main() {
    fn(x);
}
"""

def main():
    cparser = CParser()
    ast = cparser.parse(code)
    print(ast.to_str())


    """
    Declaration body action called
    Added fn to user_defined_types
    Function definition action for 'main' called
    Disambiguate called
    block_item

    block_item
    decl
    decl_body
    decl_specs
    decl_specs_g1_1
    decl_specs_g1
    type_spec
    typedef_name
    id
    init_declarator_list_opt
    init_declarator_list
    init_declarator_1_comma
    init_declarator
    declarator
    pointer_opt
    direct_declarator
    (
    declarator
    pointer_opt
    direct_declarator
    id
    )
    ;
    block_item

    block_item
    stat
    exp_stat
    exp_opt
    exp
    assignment_exp
    conditional_exp
    logical_or_exp
    logical_and_exp
    inclusive_or_exp
    exclusive_or_exp
    and_exp
    equality_exp
    relational_exp
    shift_expression
    additive_exp
    mult_exp
    cast_exp
    unary_exp
    postfix_exp
    postfix_exp
    primary_exp
    id
    (
    assignment_exp_0_comma
    assignment_exp_1_comma
    assignment_exp
    conditional_exp
    logical_or_exp
    logical_and_exp
    inclusive_or_exp
    exclusive_or_exp
    and_exp
    equality_exp
    relational_exp
    shift_expression
    additive_exp
    mult_exp
    cast_exp
    unary_exp
    postfix_exp
    primary_exp
    id
    )
    ;

translation_unit[1->26]
  external_decl_1[1->26]
    external_decl[1->26]
      function_definition[1->26]
        decl_specs[1->4]
          decl_specs_g1_1[1->4]
            decl_specs_g1[1->4]
              type_spec[1->4]
                int[1->4, "int"]
        declarator[5->11]
          pointer_opt[5->5]
          direct_declarator[5->11]
            direct_declarator[5->9]
              id[5->9, "main"]
            ([9->10, "("]
            )[10->11, ")"]
        compound_stat[12->26]
          {[12->13, "{"]
          block_item_0[18->24]
            block_item_1[18->24]
              block_item[18->24]
                decl[18->24]
                  decl_body[18->23]
                    decl_specs[18->20]
                      decl_specs_g1_1[18->20]
                        decl_specs_g1[18->20]
                          type_spec[18->20]
                            typedef_name[18->20]
                              id[18->20, "fn"]
                    init_declarator_list_opt[20->23]
                      init_declarator_list[20->23]
                        init_declarator_1_comma[20->23]
                          init_declarator[20->23]
                            declarator[20->23]
                              pointer_opt[20->20]
                              direct_declarator[20->23]
                                ([20->21, "("]
                                declarator[21->22]
                                  pointer_opt[21->21]
                                  direct_declarator[21->22]
                                    id[21->22, "x"]
                                )[22->23, ")"]
                  ;[23->24, ";"]
          }[25->26, "}"]
    """


if __name__ == "__main__":
    main()

