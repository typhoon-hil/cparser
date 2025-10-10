import os
import pytest  # noqa
from tests.utils import check_or_update


test_data = [
    ('function_params_type_spec',
     """
        void *memchr(const void *s, int c, unsigned long n);
    """),

    ('function_param_void',
     """
    void ex_codegen_dsp_terminate(void) {}
    """),

]


@pytest.mark.parametrize("name, code", test_data)
def test_function_param_ambiguity(name, code, parser, update):
    tree = parser.parse(code)
    file_path = os.path.join(os.path.realpath(os.path.dirname(__file__)),
                             f"{name}.tree")
    check_or_update(update, tree, file_path)
