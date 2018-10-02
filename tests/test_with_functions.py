
def test_with_functions(parser):
    """Tests code sample that contains function implementation,"""

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

    parser.parse(code)
