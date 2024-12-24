from cparser import CParser

# I would expect this code to get parsed as a postfix_exp 
# but instead it gets parsed ad decl (matching typedef_name)
# I would expect disambiguate to be called for typedef_name-primary_exp ambiguity because the grammar is defined as:
# typedef_name : id {dynamic};
# primary_exp  : var_ref=id {dynamic} 
#              |...
#              ;
# But it doesn't get called in this case so I cannot work on the parser actions (decl_body, primary_exp, function_definition) 

code = """
fn(x);
"""

def main():
    cparser = CParser()
    ast = cparser.parse(code)
    print(ast.to_str())

    """
    translation_unit[1->7]
        external_decl_1[1->7]
            external_decl[1->7]
            decl[1->7]
                decl_body[1->6]
                decl_specs[1->3]
                    decl_specs_g1_1[1->3]
                    decl_specs_g1[1->3]
                        type_spec[1->3]
                        typedef_name[1->3]
                            id[1->3, "fn"]
                init_declarator_list_opt[3->6]
                    init_declarator_list[3->6]
                    init_declarator_1_comma[3->6]
                        init_declarator[3->6]
                        declarator[3->6]
                            pointer_opt[3->3]
                            direct_declarator[3->6]
                            ([3->4, "("]
                            declarator[4->5]
                                pointer_opt[4->4]
                                direct_declarator[4->5]
                                id[4->5, "x"]
                            )[5->6, ")"]
                ;[6->7, ";"]
    """

if __name__ == "__main__":
    main()

