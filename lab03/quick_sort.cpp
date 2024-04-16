#include "quick_sort.h"

#include "catch2.hpp"

#include <iostream>

namespace lab03
{

    void quickSort(int* values, int n, Operation* opAsg, Operation* opCmp)
    {
        // TODO: Quick sort implementation here
    }

    void hybridizedQuickSort(int* values, int n, Operation* opAsg, Operation* opCmp)
    {
        // TODO: Hybridized quick sort implementation here
    }

    void quickSelect(int* values, int n, Operation* opAsg, Operation* opCmp)
    {
        // TODO: Quick select implementation here
    }

    void demonstrate(int size)
    {
        // TODO: Write a small demo for each sorting method here
    }

    TEST_CASE("Quick sort")
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

} // namespace lab03
