
def test_cast(parser):

    code = """
    typedef int int32_T;
    typedef unsigned int uint32_T;
    
    int32_T i;
    int32_T icng;
    uint32_T jsr;
    
    int main(){
        i = (int32_T)(icng + jsr);
        return 0; 
    }
    
    """

    results = parser.parse(code)
    print("Parsed {} trees.".format(len(results)))

    trees_count = min(len(results), 10)
    for tree in range(trees_count):
        print('Dumping tree {}'.format(tree))
        with open('tree_{}.txt'.format(tree), 'w') as f:
            f.write(results[tree].tree_str())


def test_double_cast(parser):
    code = """
    typedef double real_T;
    typedef int int32_T;
    typedef unsigned int uint32_T;

    real_T y_0;
    int32_T icng;
    uint32_T jsr;

    int main(){
        y_0 = (real_T)(int32_T)(icng + jsr) * 2.328306436538696E-10 + 0.5;
        return 0; 
    }

    """

    results = parser.parse(code)
    print("Parsed {} trees.".format(len(results)))

    trees_count = min(len(results), 10)
    for tree in range(trees_count):
        print('Dumping tree {}'.format(tree))
        with open('tree_{}.txt'.format(tree), 'w') as f:
            f.write(results[tree].tree_str())