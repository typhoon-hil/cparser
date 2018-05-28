import pytest
from cparser.parser import CParser


@pytest.fixture
def parser():
    return CParser()
