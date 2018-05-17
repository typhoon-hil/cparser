from parglare import Grammar
from parglare import GLRParser

grammar = Grammar.from_file("cgrammar.pg")
parser = GLRParser(grammar, build_tree=True)

code = """

union student
{
   char name[20];
   char subject[20];
   float percentage;
};

struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
} book;

int main(int argc, const char **argv){

   union student record1;

   struct Books Book1;
   Book1.book_id = 6495407;

   return 0;
}
"""

results = parser.parse(code)
print("Parsed {} trees.".format(len(results)))
trees_count = min(len(results), 10)
for tree in range(trees_count):
    print('Dumpring tree {}'.format(tree))
    with open('tree_{}.txt'.format(tree), 'w') as f:
        f.write(results[tree].tree_str())
