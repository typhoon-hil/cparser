import os
import pytest  #noqa
from tests.utils import check_or_update


def test_struc_ref(parser, update):

    code = """
    struct B {
        int number;
    };

    struct A {
        int data;
        B b;
    };

    """

    tree = parser.parse(code)
    file_path = os.path.join(os.path.realpath(os.path.dirname(__file__)),
                             "test_struc_ref.tree")
    check_or_update(update, tree, file_path)


def test_struc_complex(parser, update):

    code = """
    struct Complex {
        int complex_number;

        struct Simple {
            int simple_number;
        } s;
    };

    typedef Complex complex_type;

    """

    tree = parser.parse(code)
    file_path = os.path.join(os.path.realpath(os.path.dirname(__file__)),
                             "test_struc_complex.tree")
    check_or_update(update, tree, file_path)


def test_typedef_int(parser, update):

    code = """
    typedef int INT_T;

    INT_T a = 0;
    """

    tree = parser.parse(code)
    file_path = os.path.join(os.path.realpath(os.path.dirname(__file__)),
                             "test_typedef_int.tree")
    check_or_update(update, tree, file_path)


def test_typedef_stuct(parser, update):

    code = """
    typedef struct {
        int x;
        int y;
    } Complex;

    Complex c;
    """

    tree = parser.parse(code)
    file_path = os.path.join(os.path.realpath(os.path.dirname(__file__)),
                             "test_typedef_stuct.tree")
    check_or_update(update, tree, file_path)


def test_struct_pointer(parser, update):

    code = """
    struct Complex {
        int x;
        int y;
    }

    int main() {
        struct Complex *ptr;

        printf("Enter X: ");
        scanf("%d", &(*ptr).x);

        printf("Enter Y: ");
        scanf("%d", &(*ptr).y);

        printf("Displaying: ");
        printf("%d%d",(*ptr).age, (*ptr).weight);

        return 0;
    }

    """

    tree = parser.parse(code)
    file_path = os.path.join(os.path.realpath(os.path.dirname(__file__)),
                             "test_struct_pointer.tree")
    check_or_update(update, tree, file_path)


def test_enum(parser, update):

    code = """
    enum Status {
        open,
        closed
    };
    """

    tree = parser.parse(code)
    file_path = os.path.join(os.path.realpath(os.path.dirname(__file__)),
                             "test_enum.tree")
    check_or_update(update, tree, file_path)


def test_typedef_enum(parser, update):

    code = """
    typedef enum {
        kBLSUnchanged = 0,
        kBLSChanged = 1,
        kBLSDeleted = 2,
    } BufhlLineStatus;

    BufhlLineStatus status;
    """

    tree = parser.parse(code)
    file_path = os.path.join(os.path.realpath(os.path.dirname(__file__)),
                             "test_typedef_enum.tree")
    check_or_update(update, tree, file_path)


def test_typedef_multiple(parser, update):

    code = """
    typedef unsigned char uchar, uchar2, uint8;
    typedef signed char schar, int8;
    """

    tree = parser.parse(code)
    file_path = os.path.join(os.path.realpath(os.path.dirname(__file__)),
                             "test_typedef_multiple.tree")
    check_or_update(update, tree, file_path)


def test_typedef_with_ppline(parser, update):

    code = """
    typedef struct
    {
        int sh_name;
        int sh_type;
        # 201 "C:\\SmallerC\\v0100\\smlrl.c"
        int sh_flags;
    } Shd;
    """

    tree = parser.parse(code)
    file_path = os.path.join(os.path.realpath(os.path.dirname(__file__)),
                             "test_typedef_with_ppline.tree")
    check_or_update(update, tree, file_path)


def test_multiple_decl_specs(parser, update):
    code = """
    static const int X = 5;
    """
    tree = parser.parse(code)
    file_path = os.path.join(os.path.realpath(os.path.dirname(__file__)),
                             "test_multiple_decl_specs.tree")
    check_or_update(update, tree, file_path)