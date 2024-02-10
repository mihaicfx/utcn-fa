#include "demo.h"

#include "commandline.h"
#include "Profiler.h"

#define CATCH_CONFIG_RUNNER
#include "catch2.hpp"

#include <cstdio>
#include <string>

using namespace lab00;

Profiler profiler("direct sorting");

void demo(const CommandArgs& args)
{
    if (args.size() != 2) {
        throw std::runtime_error("demo needs two arguments: x and n");
    }
    const double x = atof(args[0]);
    const int n = atoi(args[1]);
    demonstrate(x, n);
}

void test(const CommandArgs& args)
{
    static Catch::Session session;
    session.run();
}

void perf(const CommandArgs& args)
{
    performance(profiler);
    profiler.reset();
}

void bench(const CommandArgs& args)
{
    benchmark(profiler);
    profiler.reset();
}

int main()
{
    const std::vector<CommandSpec> commands =
    {
        {"demo", demo, "args: x n - demonstrate x raised to power n"},
        {"test", test, "run unit-tests"},
        {"perf", perf, "run performance analysis"},
        {"bench", bench, "run benchmarks"},
    };
    return runCommandLoop(commands);
}