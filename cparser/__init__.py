from cparser.parser import CParser


def get_version():
    """
    Return C parser version. Used in setup.py and anywhere
    where version is needed.
    """
    return "0.1.4"


__version__ = get_version()


def parse_file(file_path, use_cpp=False, cpp_path="cpp",
               cpp_args=None, debug=False):
    """Parses content from the given file

    Args:
        file_path (str): Path to a C file
        use_cpp (bool): Use C preprocessor or not
        cpp_path (str): Path to the C preprocessor
        cpp_args (list): List of arguments for the CPP
        debug (bool): Debug mode flag

    Returns:
        list : list of ASTs.
    """
    p = CParser()
    return p.parse_file(
        file_path=file_path,
        use_cpp=use_cpp,
        cpp_path=cpp_path,
        cpp_args=cpp_args,
        debug=debug
    )
