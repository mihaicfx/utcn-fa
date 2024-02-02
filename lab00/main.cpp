#include "demo.h"

#include "util.h"
#include "Profiler.h"

#include <cstdio>
#include <string>


Profiler profiler("direct sorting");

void demo(const Args& args)
{
    if (args.size() != 2) {
        throw std::runtime_error("demo needs two arguments: x and n");
    }
    const double x = atof(args[0]);
    const int n = atoi(args[1]);
    demonstrate(x, n);
}

void test(const Args& args)
{
    testing();
}

void perf(const Args& args)
{
    performance(profiler);
    profiler.reset();
}

void bench(const Args& args)
{
    benchmark(profiler);
    profiler.reset();
}

int main()
{
    const std::vector<CommandSpec> commands =
    {
        {"demo", demo, "x n"},
        {"test", test},
        {"perf", perf},
        {"bench", bench},
    };
    return runCommandLoop(commands);
}