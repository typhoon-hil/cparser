import pytest
from cparser.parser import CParser


@pytest.fixture
def parser():
    return CParser()


def pytest_addoption(parser):
    parser.addoption(
        "--update-outputs", action="store_true", default=False,
        help="Update example outputs"
    )


@pytest.fixture
def update(request):
    return request.config.getoption("--update-outputs")
