#include "merge_lists.h"

#define CATCH_CONFIG_RUNNER
#include "catch2.hpp"

#include "commandline.h"
#include "Profiler.h"

#include <cstdio>
#include <string>

using namespace lab04;

Profiler profiler("merge lists");

void demo(const CommandArgs& args)
{
    const int n = args.empty() ? 10 : atoi(args[0]);
    const int k = args.empty() || args.size() == 1 ? 5 : atoi(args[1]);
    demonstrate(n, k);
}

void test(const CommandArgs& args)
{
    static Catch::Session session;
    session.run();
}

void perf(const CommandArgs& args)
{
    const auto whichCase = args.empty() ? FIXED_K : strToCaseLists(args[0]);
    performance(profiler, whichCase);
    profiler.reset();
}

int main()
{
    const std::vector<CommandSpec> commands =
    {
        {"demo", demo, "run demo"},
        {"test", test, "run unit-tests"},
        {"perf", perf, "[fixed_k(default)|fixed_n] - run performance analysis on selected case"}
    };
    return runCommandLoop(commands);
}