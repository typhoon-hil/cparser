# cparser changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

Backward incompatible changes are marked with (BIC). These changes are the reason
for the major version increase so when upgrading between major versions please
take a look at related PRs and issues and see if the change affects you.

## [0.5.2] - 2024.12.27

### Fixed

- Single parameter function calls are now properly parsed as primary expressions (primary_exp) instead of declarations (decl).

### Changed

- Migrated setup to `pyproject.toml`

## [0.5.1] - 2024.11.28

### Fixed

- C declaration lists (e.g. C code `float a, b, c;`) are now properly parsed into `parser.declarations`.

## [0.5.0] - 2024.10.08

### Added

- Added `Declaration` class that collects information about all declarations of interest in semantic actions.

### Changed

- Simplified some grammar rules and added named matches to simplify semantic actions  (**BIC**)

## [0.4.1] - 2023.11.24

### Changed

- Fixed `parglare` dependency. Now we should be able to use all 0.16.* versions of `parglare`.
- Fixed problem with installing `cparser` in editable mode.


## [0.4.0] - 2023.11.14

### Changed

- Relaxed dependency towards `parglare` parser.

## [0.3.1] - 2023.09.08

### Changed

- The dangling else problem is handled.
-
## [0.3.0] - 2023.09.04

### Changed

- Performance optimization. `forest.get_first_tree()` used instead of `forest[0]` **(BIC)**.

## [0.2.0]

### Added

- _Bool support added. _Bool is built-in type in C99.

### Changed

- Reimplemented disambiguation code in order to support the newest parglare.