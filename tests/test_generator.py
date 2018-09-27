from cparser.generator import CodeGenerator


def test_generator(parser):
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
    print(code)