#include "direct_sort.h"

#include "catch2.hpp"

#include <iostream>

namespace lab01
{

void bubbleSort(int* values, int n, Operation* opAsg, Operation* opCmp)
{
    // TODO: Bubble sort implementation here
}

void selectionSort(int* values, int n, Operation* opAsg, Operation* opCmp)
{
    // TODO: Selection sort implementation here
}

void insertionSort(int* values, int n, Operation* opAsg, Operation* opCmp)
{
    // TODO: Insertion sort implementation here
}

void binaryInsertionSort(int* values, int n, Operation* opAsg, Operation* opCmp)
{
    // TODO: Binary Insertion sort implementation here
}

void demonstrate(int size)
{
    // TODO: Write a small demo for each sorting method here
}

TEST_CASE("Direct sorting methods")
{
    // TODO: Write your unit tests here
    // Use REQUIRE( [condition] ); to perform checks
    // You can use the FillRandomArray to generate input data
    // and the IsSorted method to test the result of your sorting function.
    // For example:
    //   int data[100];
    //   FillRandomArray(data, 100);
    //   bubbleSort(data, 100);
    //   REQUIRE( IsSorted(data, 100) );
}

void performance(Profiler& profiler, AnalysisCase whichCase)
{
    // TODO: Write your performance analysis here, as explained in the readme
    // You should use profiler.createOperation to pass the counter to each sorting function
}

void benchmark(Profiler& profiler, AnalysisCase whichCase)
{
    // TODO: Write your benchmarks here, as explained in the readme
    // You should use profiler.startTimer/stopTimer for measuring and plotting measured time
}

} // namespace lab01
