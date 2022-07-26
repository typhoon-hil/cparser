import os

from cparser.generator import CodeGenerator


def test_generator(parser, update):
    """Tests visitor that renames the id's."""

    code = """
    typedef struct {
        int element;
        int weight;
    } Atom;

    typedef int int_T;
    Atom helium;
    int a = 5;
    
    int main(int argc, const char **argv){
    
       
        
        int n;
        for(n = 0; n < helium.weight; n++){
            a = 10;
        }
    
        while(helium.element < 10){
            helium.element = helium.weight + helium.element + 100;
        }
    

    
        return 0;
    }
    
    """
    ast = parser.parse(code)

    generator = CodeGenerator()
    code = generator.generate(ast, debug=True)

    file_path = os.path.join(os.path.realpath(os.path.dirname(__file__)),
                             "test_generator.c")
    if update:
        with open(file_path, "w") as f:
            f.write(code)
    else:
        with open(file_path, "r") as f:
            assert code == f.read()