#include "demo.h"

#include <cstdio>
#include <cmath>


double slowPow(double x, int n, Operation* op)
{
    double y = 1;
    for (int i = 0; i < n; ++i) {
        //count the multiplications
        if (op) op->count();
        y *= x;
    }
    return y;
}


double fastPow(double x, int n, Operation* op)
{
    if (n == 0) {
        return 1;
    } else if(n == 1) {
        return x;
    } else {
        double y = fastPow(x, n / 2, op);
        if(n % 2 == 0) {
            //count multiplications
            if (op) op->count();
            return y * y;
        } else {
            //we can also count two multiplications at once
            if (op) op->count(2);
            return y * y * x;
        }
    }
}


void demonstrate(double x, int n)
{
    printf("Slow pow(%g, %d) = %g\n", x, n, slowPow(x, n));
    printf("Fast pow(%g, %d) = %g\n", x, n, fastPow(x, n));
}


bool fpAproxEqual(double x, double y)
{
    return std::fabs(x - y) < (x / 1e10);
}

void testing(void)
{
    printf("Testing power functions... ");
    bool ok = true;
    for (int i = 0; i < 20; ++i) {
        const double x = (double)(rand()) / RAND_MAX * 10;
        const int n = 1 + (rand() % 10);

        const double res1 = slowPow(x, n);
        const double res2 = fastPow(x, n);

        if (!fpAproxEqual(res1, res2)) {
            ok = false;
            break;
        }
    }
    printf("%s\n", ok? "OK": "FAILED");
}


void performance(Profiler& profiler)
{
    const double x = (double)(rand()) / RAND_MAX * 10;
    printf("Computing powers of %g...\n", x);
    // increase n with 1 if smaller than 10
    // increase with 10 otherwise
    for (int n = 0; n < 200; n += (n < 10? 1: 10)) {
        auto opSlow = profiler.createOperation("slow_pow", n);
        auto opFast = profiler.createOperation("fast_pow", n);
        slowPow(x, n, &opSlow);
        fastPow(x, n, &opFast);
    }
    // we would like the two series to be displayed on the same chart
    profiler.createGroup("power", "slow_pow", "fast_pow");
}


void benchmark(Profiler& profiler)
{
    printf("Benchmarking power functions...\n");
    const double x = 1.1;
    // each algorithm needs to be run in a loop
    // otherwise we get 0 time because it's too small
    const int repeatCounter = 100000;
    for (int n = 0; n < 200; n += 10) {
        profiler.startTimer("slow_pow", n);
        for (int j = 0; j < repeatCounter; ++j) {
            slowPow(x, n);
        }
        profiler.stopTimer("slow_pow", n);

        profiler.startTimer("fast_pow", n);
        for (int j = 0; j < repeatCounter; ++j) {
            fastPow(x, n);
        }
        profiler.stopTimer("fast_pow", n);
    }
    // we would like the two series to be displayed on the same chart
    profiler.createGroup("time", "slow_pow", "fast_pow");
}