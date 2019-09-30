import os
import glob


def test_code_snippets(parser):

    this_file = os.path.realpath(os.path.dirname(__file__))
    root_path = os.path.split(os.path.abspath(os.path.join(this_file)))[0]

    snippets_path = os.path.join(root_path, "tests", "code_snippets", "*.c")

    example_idx = 0

    for example in glob.iglob(snippets_path):
        print("Parsing: %s" % example)
        parser.parse_file(example)

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


def test_pp_in_loop(parser):

    code = """
    void main(){
        int sum = 0;
        for(int i = 0; i < 10; i++){
            # 2 "some fictive path"
            sum =+ 1;
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


def test_unsigned_long(parser):

    code = """
    unsigned long ul65536 = 65536UL;
    """

    parser.parse(code)


def test_float(parser):

    code = """
    float state = 0.0f;
    """

    parser.parse(code)


def test_hex(parser):

    code = """
    int state = 0x0;
    """

    parser.parse(code)


def test_hex_with_u_suffix(parser):

    code = """
    int state = 0xFFu;
    """

    parser.parse(code)


def test_unsigned_int(parser):

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


def test_adjacent_strings(parser):

    code = """
    void main(){
        printf("DEAD""BEEF");
    }
    """

    parser.parse(code)


def test_compound_expressions(parser):

    code = r"""
    int escape(char* in){
        int slashes = 0;
        
        while ((c = *in++) != '\0')
        {
            if (c == '\\')
            {
                do {
                    slashes++;
                } while ((c = *in++) == '\\');
            }
        }
        
        return slashes;
    }
    """

    parser.parse(code)


def test_array(parser):

    code = """
    int cases[] = {
          # 1 "C:\\some\\path\\scanf.c"
          { 1, 2, 3, 4 },
          # 2 "C:\\some\\path\\math.h"
          { 5, 6, 7, 8 },
    };
    """

    parser.parse(code)


def test_slash_in_char(parser):

    code = r"""
    char a = '\'';
    char b = '"';
    """

    parser.parse(code)
