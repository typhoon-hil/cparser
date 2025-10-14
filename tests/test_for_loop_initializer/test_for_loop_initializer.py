import os
import pytest  # noqa
from tests.utils import check_or_update


test_data = [
    ('for_loop_init',
     """
     void main() {
        for(int i = 0; i<100; i++){}
        for(int i = 0, j=0; i<100; i++){}
        for(i = 0; i<100; i++){}
        for(i = 0, j=0; i<100; i++){}
     }
        
    """),
]


@pytest.mark.parametrize("name, code", test_data)
def test_for_loop_initializer_ambiguity(name, code, parser, update):
    tree = parser.parse(code)
    file_path = os.path.join(os.path.realpath(os.path.dirname(__file__)),
                             f"{name}.tree")
    check_or_update(update, tree, file_path)
