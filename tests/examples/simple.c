typedef struct {
    int element;
    int weight;
} Atom;

typedef int int_T;
Atom helium;
int a = 5;

int main(int argc, const char **argv){

    if (a > 5) {
        helium.element = 1;
        helium.weight = 100;
    }

    if (5 < helium.element) {
        helium.element = 10;
    }

    for(int n = 0; n < helium.weight; n++){
        a = 10;
    }

    while(helium.element < 10){
        helium.element = helium.weight + helium.element + 100;
    }

    int_T nja = 10;

    return 0;
}