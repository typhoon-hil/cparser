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

