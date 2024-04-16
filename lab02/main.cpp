#include "heap.h"

#define CATCH_CONFIG_RUNNER
#include "catch2.hpp"

#include "commandline.h"
#include "Profiler.h"

#include <cstdio>
#include <string>

using namespace lab02;

Profiler profiler("heap");

void demo(const CommandArgs& args)
{
    const int size = args.empty()? 10: atoi(args[0]);
    demonstrate(size);
}

void test(const CommandArgs& args)
{
    static Catch::Session session;
    session.run();
}

void perf(const CommandArgs& args)
{
    const auto whichCase = args.empty()? AVERAGE: strToCase(args[0]);
    performance(profiler, whichCase);
    profiler.reset();
}

void bench(const CommandArgs& args)
{
    const auto whichCase = args.empty()? AVERAGE: strToCase(args[0]);
    benchmark(profiler, whichCase);
    profiler.reset();
}

int main()
{
    const std::vector<CommandSpec> commands =
    {
        {"demo", demo, "run demo"},
        {"test", test, "run unit-tests"},
        {"perf", perf, "[avg(default)|best|worst] - run performance analysis on selected case"},
        {"bench", bench, "[avg(default)|best|worst] - run benchmarks on selected case"},
    };
    return runCommandLoop(commands);
}