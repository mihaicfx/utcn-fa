# Introduction to Profiler and lab structure

Implementation of a slow and a fast power function, with demo, tests and performance analysis.
Contains demonstrative code for using the Profiler in counting operations and measuring the running time.

## What you can find in this folder:
1. `Makefile` and `CMakeLists.txt` for console build.
2. `main.cpp` containing wrapper code.
3. `demo.cpp` containing demo implementation.
4. `demo.h` containing demo function signatures and doxygen documentation.

## Building
### [Make](https://www.gnu.org/software/make/) build

* Run `make` in current folder.

### [CMake](https://cmake.org/) build

* Configure by running `cmake -S . -B ./build`
* Build with `cmake --build ./build`

## Running
You can find the output binary in the build folder.

Running the program prompts a console that accepts user provided commands.
Run command `help` to list all the supported commands.