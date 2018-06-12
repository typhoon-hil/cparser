import os
import glob


def test_examples(parser):

    this_file = os.path.realpath(os.path.dirname(__file__))
    root_path = os.path.split(os.path.abspath(os.path.join(this_file)))[0]

    examples_path = os.path.join(root_path, "tests", "examples", "*.c")

    example_idx = 0

    for example in glob.iglob(examples_path):
        print("Parsing: %s" % example)
        results = parser.parse_file(example)

        print("Number of trees: {}".format(len(results)))
        trees_count = min(len(results), 10)

        for tree in range(trees_count):
            print('Dumping tree {}'.format(tree))
            with open('{}_tree_{}.txt'.format(example_idx, tree), 'w') as f:
                f.write(results[tree].tree_str())

        example_idx += 1


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


def test_uint(parser):

    code = """
    unsigned int state = 362436069U;
    """

    parser.parse(code)


def test_long(parser):

    code = """
    int state = 362436069L;
    """

    parser.parse(code)


def test_hex(parser):

    code = """
    int state = 0x0;
    """

    parser.parse(code)


def test_negation(parser):

    code = """
    unsigned truncUint(int sizeOfWord, unsigned n)
    {
        
      if (sizeOfWord == 2)
        n &= ~(~0u << 8 << 8);

      else if (sizeOfWord == 4)
        n &= ~(~0u << 8 << 12 << 12);

      return n;
    }
    """

    parser.parse(code)


def test_pp_line_in_stat(parser):

    code = """
    void loop(int n) {
        for(int i = 0; i < n; i++){
            
        }
        # 1 "C:\\cparser\\utils\\math.h"
    }
    """

    parser.parse(code)

