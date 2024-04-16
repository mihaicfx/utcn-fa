#include "heap.h"

#include "catch2.hpp"

#include <iostream>

namespace lab02
{
    void iterativeSort(int* values, int n, Operation* opAsg, Operation* opCmp)
    {
        // TODO: iterative implementation of a sorting algorithm from Laboratory 1 here
    }

    void recursiveSort(int* values, int n, Operation* opAsg, Operation* opCmp)
    {
        // TODO: recursive implementation of the same sorting algorithm from Laboratory 1 here
    }

    void buildHeap_BottomUp(int* values, int n, Operation* opAsg, Operation* opCmp)
    {
        // TODO: bottom-­up build heap implementation here
    }

    void buildHeap_TopDown(int* values, int n, Operation* opAsg, Operation* opCmp)
    {
        // TODO: top-down build heap implementation here
    }

    void heapSort(int* values, int n, Operation* opAsg, Operation* opCmp)
    {
        // TODO: Heap sort implementation here
    }

    void demonstrate(int size)
    {
        // TODO: Write a small demo for each method here
    }

    TEST_CASE("Heap methods")
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

} // namespace lab02
