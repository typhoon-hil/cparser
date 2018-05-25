import os
import glob


def test_examples(parser):

    this_file = os.path.realpath(os.path.dirname(__file__))
    root_path = os.path.split(os.path.abspath(os.path.join(this_file)))[0]

    examples_path = os.path.join(root_path, "tests", "examples", "*.c")

    for example in glob.iglob(examples_path):
        parser.parse_file(example)


def test_decl_after_if(parser):

    code = """
    
    int main(int argc, const char **argv){
        
        int a = 1;
        if (a > 5) {
           
        }
        
        int n;
    
        return 0;
    }
    """

    parser.parse(code)


def test_for_loop_v1(parser):

    code = """
    
    int main(int argc, const char **argv){
        
        int i;
        for(i = 0; i < 10; i++) {
        
        }
        
    }
    """

    parser.parse(code)


def test_for_loop_v2(parser):
    """Tests parsing of for-loop without initialization."""

    code = """

    int main(int argc, const char **argv){

        int i = 0;
        for(; i < 10; i++) {

        }

    }
    """

    parser.parse(code)


def test_for_loop_v3(parser):
    """Tests parsing of for-loop without initialization and condition."""

    code = """

    int main(int argc, const char **argv){

        int i = 0;
        for(;; i++) {
            if ( i < 10 ) {
                break;
            }
        }

    }
    """

    parser.parse(code)


def test_for_loop_v4(parser):
    """Tests parsing of the infinite for-loop."""

    code = """

    int main(int argc, const char **argv){

        int i = 0;
        for(;;) {
            if ( i < 10 ) {
                break;
            }
            
            i++;
        }

    }
    """

    parser.parse(code)


def test_foor_without_braces(parser):
    """Tests parsing of the for-loop without braces."""

    code = """

    int main(int argc, const char **argv){

        int i;
        int a = 0;
        for(i = 0; i < 10; i++)
           a = i * 2;

    }
    """

    parser.parse(code)


def test_for_loop_c99(parser):
    """Tests parsing of C99 compatible for-loop."""

    code = """

        int main(int argc, const char **argv){
            
            int j;
            for(int i = 0, j = 0;;) {
                if ( i < 10 ) {
                    break;
                }

                i++;
            }

        }
        """

    parser.parse(code)
