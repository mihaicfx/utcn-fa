#ifndef __DEMO_H__
#define __DEMO_H__

#include "Profiler.h"

namespace lab00
{

/**
 * @brief A function that computes x to the power of n inneficiently
 *
 * @param x value to be used
 * @param n exponent
 * @param op optional operation counter
 */
double slowPow(double x, int n, Operation* op = nullptr);

/**
 * @brief A function that computes x to the power of n eficiently
 *
 * @param x value to be used
 * @param n exponent
 * @param op optional operation counter
 */
double fastPow(double x, int n, Operation* op = nullptr);

/**
 * @brief Demo code for the power functions
 *
 * @param x value to be used
 * @param n exponent
 */
void demonstrate(double x, int n);

/**
 * @brief Performance analysis for the power functions
 *
 * @param profiler profiler to use
 */
void performance(Profiler& profiler);

/**
 * @brief Benchmarking for the power functions
 *
 * @param profiler profiler to use
 */
void benchmark(Profiler& profiler);

} // namespace lab00

#endif // __DEMO_H__