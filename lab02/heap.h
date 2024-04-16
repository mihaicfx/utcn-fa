#ifndef __HEAP_H__
#define __HEAP_H__

#include "Profiler.h"
#include "commandline.h"

namespace lab02
{

	/**
	 * @brief iterative implementation of a sorting algorithm from Laboratory 1
	 *
	 * @param values array of input values to be sorted
	 * @param n number of values in the input array
	 * @param opAsg optional counter for assignment operations
	 * @param opCmp optional counter for comparison operations
	 */
	void iterativeSort(int* values, int n, Operation* opAsg = nullptr, Operation* opCmp = nullptr);

	/**
	 * @brief recursive implementation of the same sorting algorithm from Laboratory 1
	 *
	 * @param values array of input values to be sorted
	 * @param n number of values in the input array
	 * @param opAsg optional counter for assignment operations
	 * @param opCmp optional counter for comparison operations
	 */
	void recursiveSort(int* values, int n, Operation* opAsg = nullptr, Operation* opCmp = nullptr);

	/**
	 * @brief bottom­up build heap procedure 
	 *
	 * @param values array of input values to be sorted
	 * @param n number of values in the input array
	 * @param opAsg optional counter for assignment operations
	 * @param opCmp optional counter for comparison operations
	 */
	void buildHeap_BottomUp(int* values, int n, Operation* opAsg = nullptr, Operation* opCmp = nullptr);

	/**
	 * @brief top­down build heap procedure 
	 *
	 * @param values array of input values to be sorted
	 * @param n number of values in the input array
	 * @param opAsg optional counter for assignment operations
	 * @param opCmp optional counter for comparison operations
	 */
	void buildHeap_TopDown(int* values, int n, Operation* opAsg = nullptr, Operation* opCmp = nullptr);

	/**
	 * @brief Heap sort algorithm
	 *
	 * @param values array of input values to be sorted
	 * @param n number of values in the input array
	 * @param opAsg optional counter for assignment operations
	 * @param opCmp optional counter for comparison operations
	 */
	void heapSort(int* values, int n, Operation* opAsg = nullptr, Operation* opCmp = nullptr);


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

} // namespace lab02

#endif // __HEAP_H__