# Algorithms
This repository stores a solver with implementations on generic useful algorithms such as binary search, shortest path, etc.. The objective is to have a basic framework to build code that may need classical algorithms and allow fast development of a multi-purpose software.

# STRUCTURE

The main folder is designed to be as clean as possible, holding only the README, the License, the Makefile and the main files (code and executable). The additional folders:
    - Data: hold inputs for the main procedure.
    - Results: stores the output data with the software standards.
    - Functions: folder with the framework to solve classical problems. This should be modular as this may be attached to any outside project and still be useful.
    - Functions/Util: common methods that may be used by more than one.
    - Tests: unity tests to validate all algorithms.
