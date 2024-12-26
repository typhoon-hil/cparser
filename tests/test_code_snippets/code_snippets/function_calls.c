void fn_a(int a) {}

int fn_b() {
    return 0;
}

int fn_c(int a, int b) {
    return a + b;
}

int main() {
    int x;
    fn(x);
    int y = fn_b();
    int z = fn_c(1, 2);
}