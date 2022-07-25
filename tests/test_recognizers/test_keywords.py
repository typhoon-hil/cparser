import os
from tests.utils import check_or_update


def test_recognizers(parser, update):
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

    tree = parser.parse(code)

    file_path = os.path.join(os.path.realpath(os.path.dirname(__file__)),
                             "test_recognizers.tree")
    check_or_update(update, tree, file_path)
