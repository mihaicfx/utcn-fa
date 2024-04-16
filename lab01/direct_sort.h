#ifndef __DIRECT_SORT_H__
#define __DIRECT_SORT_H__

#include "Profiler.h"
#include "commandline.h"

namespace lab01
{

/**
 * @brief Bubble sort algorithm
 *
 * @param values array of input values to be sorted
 * @param n number of values in the input array
 * @param opAsg optional counter for assignment operations
 * @param opCmp optional counter for comparison operations
 */
void bubbleSort(int* values, int n, Operation* opAsg = nullptr, Operation* opCmp = nullptr);

/**
 * @brief Selection sort algorithm
 *
 * @param values array of input values to be sorted
 * @param n number of values in the input array
 * @param opAsg optional counter for assignment operations
 * @param opCmp optional counter for comparison operations
 */
void selectionSort(int* values, int n, Operation* opAsg = nullptr, Operation* opCmp = nullptr);

/**
 * @brief Insertion sort algorithm
 *
 * @param values array of input values to be sorted
 * @param n number of values in the input array
 * @param opAsg optional counter for assignment operations
 * @param opCmp optional counter for comparison operations
 */
void insertionSort(int* values, int n, Operation* opAsg = nullptr, Operation* opCmp = nullptr);

/**
 * @brief Binary Insertion sort algorithm (insertion sort with binary search)
 *
 * @param values array of input values to be sorted
 * @param n number of values in the input array
 * @param opAsg optional counter for assignment operations
 * @param opCmp optional counter for comparison operations
 */
void binaryInsertionSort(int* values, int n, Operation* opAsg = nullptr, Operation* opCmp = nullptr);

/**
 * @brief Demo code for the sorting algorithms
 *
 * @param size number of elements to demonstrate on
 */
void demonstrate(int size);

/**
 * @brief Performance analysis for the sorting algorithms
 *
 * @param profiler profiler to use
 * @param whichCase one of AVERAGE, BEST or WORST cases
 */
void performance(Profiler& profiler, AnalysisCase whichCase);

/**
 * @brief Benchmarking for the sorting algorithms
 *
 * @param profiler profiler to use
 * @param whichCase one of AVERAGE, BEST or WORST cases
 */
void benchmark(Profiler& profiler, AnalysisCase whichCase);

} // namespace lab01

#endif // __DIRECT_SORT_H__