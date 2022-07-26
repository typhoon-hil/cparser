# cparser changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

Backward incompatible changes are marked with (BIC). These changes are the reason
for the major version increase so when upgrading between major versions please 
take a look at related PRs and issues and see if the change affects you.


## [0.2.0]

### Added

- _Bool support added. _Bool is built-in type in C99.

### Changed

- Reimplemented disambiguation code in order to support the newest parglare. 