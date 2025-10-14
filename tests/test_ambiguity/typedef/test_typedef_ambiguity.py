# Tests for regression reported in issue #13
# https://github.com/typhoon-hil/cparser/issues/13
import os

import pytest  # noqa

from tests.utils import check_or_update

test_data = [
    ('struct_defined_field',
     """
        typedef int A;
        typedef struct {
            A a;
        } B;
    """),

    ('struct_undefined_field',
     """
        typedef struct {
            A a;
        } B;
     """),

    ('typedef_func_pointer',
     """
        typedef void (*A)(void* obj);
        typedef struct {
            A a;
        } B;
     """),

    ('typedef_array',
     """
        typedef int a[][][];
     """),

    ('typedef_alias',
     """
        typedef A B;
     """),

    ('struct_tag',
     """
        struct A {
            int a;
        };
     """),

    ('typedef_custom_type_in_parent_expr',
     """
        typedef int inherit;
        inherit on_nominal = 0;

        void output_fnc() {
            if ((on_nominal) && (live_grid == 1)) {
                synch = 1;
            }
        }
     """),
]


@pytest.mark.parametrize("name, code", test_data)
def test_typedef_ambiguity(name, code, parser, update):
    tree = parser.parse(code)
    file_path = os.path.join(os.path.realpath(os.path.dirname(__file__)),
                             f"{name}.tree")
    check_or_update(update, tree, file_path)
