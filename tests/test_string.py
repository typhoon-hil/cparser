

def test_fnc_call_with_str(parser):

    code = r"""
    void main() {
        char* p;
        p = Malloc(sizeof ".\\");
        strcpy(p, ".\\");
    }
    """

    parser.parse(code)


def test_empty(parser):

    code = """
    void main(){
        puts("");
    }
    """

    parser.parse(code)
