import os
import glob


def test_examples(parser):

    this_file = os.path.realpath(os.path.dirname(__file__))
    root_path = os.path.split(os.path.abspath(os.path.join(this_file)))[0]

    examples_path = os.path.join(root_path, "tests", "examples", "*.c")

    for example in glob.iglob(examples_path):
        parser.parse_file(example)
