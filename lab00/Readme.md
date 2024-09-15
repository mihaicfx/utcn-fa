# Introduction to Laboratory Structure and Profiler

## Objective:

- Set up the essential tools and development environment necessary for this laboratory.
- Discuss the concept of performance profiling and its application in analyzing code efficiency.
- Introduction to the Profiler tool by using a practical example of two power functions (slow and fast) for measuring execution time, counting operations, and generating performance reports.

### Performance Analysis:

- Uses the Profiler to measure the execution time and operation count of both power functions.
- The results demonstrate the performance difference between the two implementations.

### Code Testing:

- Provides unit tests to verify the correctness of both power functions.

## What you can find in this folder:
1. `Makefile` and `CMakeLists.txt` for console build.
2. `main.cpp` containing wrapper code.
3. `demo.cpp` containing demo implementation.
4. `demo.h` containing demo function signatures and doxygen documentation.

## Building
### [Make](https://www.gnu.org/software/make/) build

* Run `make` in current folder.

### [CMake](https://cmake.org/) build

* Prerequisite: install `CMake` on your system.
* Configure by running `cmake -S . -B ./build`.
* Build with `cmake --build ./build`.

## Running
You can find the output binary in the build folder.

Running the program prompts a console that accepts user provided commands.
Run command `help` to list all the supported commands.