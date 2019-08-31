from cparser import CParser
from cparser.parser import preprocess_file, get_default_pp_args
import tempfile

code = """
#include <stdio.h>

#ifndef CUSTOM_PI
#define CUSTOM_PI 3.14159265358979323846
#endif

int main() {
    float a = CUSTOM_PI;
    return 0;
}
"""


cparser = CParser()
with tempfile.NamedTemporaryFile("w+", suffix=".c") as f:
    f.write(code)
    f.flush()

    pp_code = preprocess_file(
        f.name,
        cpp_path="gcc",
        cpp_args=["-E", get_default_pp_args()]
    )
    ast = cparser.parse(pp_code)
