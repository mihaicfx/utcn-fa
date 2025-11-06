#include "quick_sort.h"

#define CATCH_CONFIG_RUNNER
#include "catch2.hpp"

#include "commandline.h"
#include "Profiler.h"

#include <cstdio>
#include <string>
#include <vector>

using namespace lab03;

Profiler profiler("quick sort");

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

void print_array(const char* message, const std::vector<int>& values)
{
    printf("%s: ", message);
    for (int value : values) {
        printf("%d ", value);
    }
    printf("\n");
}

void demo_quicksort(const CommandArgs& args) {
    std::vector<int> v;
    for (const auto& arg : args) {
        v.push_back(atoi(arg));
    }

    quickSort(v.data(), static_cast<int>(v.size()));
    print_array("After ", v);
}

void demo_quickselect(const CommandArgs& args) {
    if (args.size() < 2) {
        printf("Usage: quickselect <k> <num1> <num2> ...\n");
        return;
    }
    int k = atoi(args[0]);
    std::vector<int> v;
    for (size_t i = 1; i < args.size(); ++i) {
        v.push_back(atoi(args[i]));
    }

    if (k < 0 || k >= v.size()) {
        printf("Error: k must be between 0 and %zu\n", v.size() - 1);
        return;
    }

    int result = quickSelect(v.data(), static_cast<int>(v.size()), k);
    printf("The %d-th smallest element is: %d\n", k + 1, result);
}

int main()
{
    const std::vector<CommandSpec> commands =
    {
        {"demo", demo, "run demo"},
        {"quicksort", demo_quicksort, "[num1] [num2] ... - demonstrate Quick Sort"},
        {"quickselect", demo_quickselect, "<k> [num1] [num2] ... - demonstrate Quick Select"},
        {"test", test, "run unit-tests"},
        {"perf", perf, "[avg(default)|best|worst] - run performance analysis on selected case"},
        {"bench", bench, "[avg(default)|best|worst] - run benchmarks on selected case"},
    };
    return runCommandLoop(commands);
}