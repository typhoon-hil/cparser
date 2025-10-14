import os
from tests.utils import check_or_update


def test_cast(parser, update):

    code = """
    typedef int int32_T;
    typedef unsigned int uint32_T;
    
    int32_T i;
    int32_T icng;
    uint32_T jsr;
    
    int main(){
        i = (int32_T)(icng + jsr);
        return 0; 
    }
    
    """

    tree = parser.parse(code)

    file_path = os.path.join(os.path.realpath(os.path.dirname(__file__)),
                             "test_cast.tree")
    check_or_update(update, tree, file_path)


def test_double_cast(parser, update):
    code = """
    typedef double real_T;
    typedef int int32_T;
    typedef unsigned int uint32_T;

    real_T y_0;
    int32_T icng;
    uint32_T jsr;

    int main(){
        y_0 = (real_T)(int32_T)(icng + jsr) * 2.328306436538696E-10 + 0.5;
        return 0; 
    }

    """

    tree = parser.parse(code)

    file_path = os.path.join(os.path.realpath(os.path.dirname(__file__)),
                             "test_double_cast.tree")
    check_or_update(update, tree, file_path)

