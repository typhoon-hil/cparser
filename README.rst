
A C parser based on `parglare <https://github.com/igordejanovic/parglare/>`_ - a pure Python scannerless LR/GLR parser.

Quick intro
-----------

**cparser** is a parser for C language. This example shows how to
collect all IDs from a simple C code.

.. code:: python

    from cparser import CParser
    from cparser.visitor import ASTVisitor

    code = """
    typedef struct {
        int element;
        int weight;
    } Atom;

    Atom helium;
    """

    class IDVisitor(ASTVisitor):
        """Visitor that collects all identifiers in the code."""

        def visit_id(self, node):
            print(node.value)
            return node

    parser = CParser()
    ast = parser.parse(code)

    visitor = IDVisitor()
    visitor.visit(ast)

    # Output should look like this:
    # element
    # weight
    # Atom
    # Atom
    # helium


Installation
------------

- Stable version:

.. code:: shell

    $ pip install cparser


- Development version:

.. code:: shell

    $ git clone https://github.com/typhoon-hil/cparser.git
    $ pip install -e cparser

Licence
-------

MIT

Python versions
---------------

Tested with 3.6-3.9
