#include "order_statistics.h"

#define CATCH_CONFIG_RUNNER
#include "catch2.hpp"

#include "commandline.h"
#include "Profiler.h"

#include <cstdio>
#include <string>
#include <iostream>
#include <vector>

using namespace lab07;

Profiler profiler("Order Statistics Tree");

void runTests(const CommandArgs& args)
{
    static Catch::Session session;
    session.run();
}

void demo_cmd(const CommandArgs& args)
{
    // Default n to 11 as per the readme.md
    int n = args.empty() ? 11 : std::stoi(args[0]);
    demo(n);
}

void perf_cmd(const CommandArgs& args)
{
    performance();
    profiler.showReport();
}

int main()
{
    const std::vector<CommandSpec> commands =
    {
        {"test", runTests, "Run unit-tests"},
        {"demo", demo_cmd, "[n=11] - Run demo for the Order Statistics Tree"},
        {"perf", perf_cmd, "Run performance analysis for the OS Tree operations"}
    };
    return runCommandLoop(commands);
}