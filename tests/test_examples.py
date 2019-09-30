"""Tests code snippets from example folder"""

import pytest   # noqa
import os
import sys
import glob
import importlib as imp


def test_examples():

    examples_pat = os.path.join(os.path.abspath(os.path.dirname(__file__)),
                                '../examples/*.py')

    examples = [f for f in glob.glob(examples_pat)]

    for e in examples:
        example_dir = os.path.dirname(e)
        sys.path.insert(0, example_dir)
        module_name, _ = os.path.splitext(os.path.basename(e))
        # (module_file, module_path, desc) = \
        #     imp.find_module(module_name, [example_dir])

        m = imp.import_module(module_name)

        if hasattr(m, 'main'):
            m.main()