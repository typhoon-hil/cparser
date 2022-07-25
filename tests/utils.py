def check_or_update(update, tree, file_path):
    tree_str = tree.to_str()

    if update:
        with open(file_path, "w") as f:
            f.write(tree_str)
    else:
        with open(file_path, "r") as f:
            assert tree_str == f.read()
