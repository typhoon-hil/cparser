import os
import tempfile
from cparser import CParser
from cparser.parser import preprocess_file


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
f = tempfile.NamedTemporaryFile("w+", suffix=".c", delete=False)

try:
    f.write(code)
    f.flush()

    pp_code = preprocess_file(f.name, cpp_path="cpp")
    ast = cparser.parse(pp_code)
finally:
    f.close()
    os.unlink(f.name)

