#include "demo.h"

#include "commandline.h"
#include "Profiler.h"

#define CATCH_CONFIG_RUNNER
#include "catch2.hpp"

#include <cstdio>
#include <string>


Profiler profiler("direct sorting");
Catch::Session session;

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
        {"demo", demo, "x n"},
        {"test", test},
        {"perf", perf},
        {"bench", bench},
    };
    return runCommandLoop(commands);
}