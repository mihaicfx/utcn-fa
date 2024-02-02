#include "direct_sort.h"

#include <iostream>

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

void demonstrate(int size)
{
    // TODO: Write a small demo for each sorting method here
}

void testing(void)
{
    // TODO: Write your unit tests here
    // You can use the FillRandomArray to generate input data
    // and the IsSorted method to test the result of your sorting function
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