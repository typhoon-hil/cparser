
def test_recognizers(parser):
    code = """
    typedef int int8_t;

    typedef int auto1;
    typedef int register1;
    typedef int static1;
    typedef int external;
    typedef int typedef1;
    
    typedef char character;
    typedef short shorter;
    typedef int integer;
    typedef long longer;
    typedef float floating;
    typedef double doubler;
    typedef signed signed1;
    typedef unsigned unsigned1;
    
    typedef int constant;
    typedef int volatilised;
    
    typedef int struct1;
    typedef int union1;
    
    typedef int if1;
    typedef int switch1;
    
    """

    ast = parser.parse(code)
    print(ast.tree_str())
