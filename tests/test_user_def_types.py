import pytest  #noqa


def test_struc_ref(parser):

    code = """
    struct B {
        int number;
    };

    struct A {
        int data;
        B b;
    };

    """

    parser.parse(code)


def test_struc_complex(parser):

    code = """
    struct Complex {
        int complex_number;
        
        struct Simple {
            int simple_number;
        } s;
    };
    
    typedef Complex complex_type;

    """

    parser.parse(code)


def test_typedef_int(parser):

    code = """
    typedef int INT_T;
    
    INT_T a = 0;
    """

    parser.parse(code)


def test_typedef_stuct(parser):

    code = """
    typedef struct {
        int x;
        int y;
    } Complex;
    
    Complex c;
    """

    parser.parse(code)


def test_struct_pointer(parser):

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

    parser.parse(code)


def test_enum(parser):

    code = """
    enum Status {
        open,
        closed
    };
    """

    parser.parse(code)


def test_typedef_enum(parser):

    code = """
    typedef enum {
        kBLSUnchanged = 0,
        kBLSChanged = 1,
        kBLSDeleted = 2,
    } BufhlLineStatus;
    
    BufhlLineStatus status;
    """

    parser.parse(code)


def test_typedef_multiple(parser):

    code = """
    typedef unsigned char uchar, uchar2, uint8;
    typedef signed char schar, int8;
    """

    parser.parse(code)


def test_typedef_with_ppline(parser):

    code = """
    typedef struct
    {
        int sh_name;
        int sh_type;
        # 201 "C:\\SmallerC\\v0100\\smlrl.c"
        int sh_flags;
    } Shd;
    """

    ast = parser.parse(code)
    print(ast.tree_str())
