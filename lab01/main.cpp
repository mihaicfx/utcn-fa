#include "direct_sort.h"

#include "commandline.h"
#include "Profiler.h"

#include <cstdio>
#include <string>


Profiler profiler("direct sorting");

void demo(const CommandArgs& args)
{
    const int size = args.empty()? 10: atoi(args[0]);
    demonstrate(size);
}

void test(const CommandArgs& args)
{
    testing();
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
        {"demo", demo},
        {"test", test},
        {"perf", perf, "[avg(default)|best|worst]"},
        {"bench", bench, "[avg(default)|best|worst]"},
    };
    return runCommandLoop(commands);
}