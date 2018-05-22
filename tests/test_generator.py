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
    results = parser.parse(code)

    ast = results[0]

    generator = CodeGenerator()
    code = generator.generate(ast, id_prefix="new_", debug=True)
    print(code)