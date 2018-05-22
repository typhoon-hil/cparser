import pytest
import os
from parglare import Grammar, GLRParser


@pytest.fixture
def parser():
    file_path = os.path.realpath(os.path.dirname(__file__))
    root_path = os.path.split(os.path.abspath(os.path.join(file_path)))[0]
    grammar_path = os.path.join(root_path, "cparser", "cgrammar.pg")

    grammar = Grammar.from_file(grammar_path)
    return GLRParser(grammar, build_tree=True)
