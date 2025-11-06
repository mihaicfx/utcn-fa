#include "direct_sort.h"

#define CATCH_CONFIG_RUNNER
#include "catch2.hpp"

#include "commandline.h"
#include "Profiler.h"

#include <cstdio>
#include <string>
#include <vector>

using namespace lab01;

Profiler profiler("direct sorting");

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
    for (int i = 0; i < values.size(); ++i) {
        printf("%d ", values[i]);
    }
    printf("\n");
}

void demo_sort(const CommandArgs& args, void (*sort_func)(int*, int, Operation*, Operation*))
{
    std::vector<int> values;
    values.reserve(args.size());
    for (const auto& arg : args) {
        values.push_back(atoi(arg));
    }

    sort_func(values.data(), static_cast<int>(values.size()), nullptr, nullptr);
    print_array("Result:", values);
}

void demo_bubble(const CommandArgs& args) {
    demo_sort(args, bubbleSort);
}

void demo_selection(const CommandArgs& args) {
    demo_sort(args, selectionSort);
}

void demo_insertion(const CommandArgs& args) {
    demo_sort(args, insertionSort);
}

void demo_binary_insertion(const CommandArgs& args) {
    demo_sort(args, binaryInsertionSort);
}

int main()
{
    const std::vector<CommandSpec> commands =
    {
        {"demo", demo, "run demo"},
        {"bubble", demo_bubble, "[num1] [num2] ... - demonstrate bubble sort on a list of numbers"},
        {"selection", demo_selection, "[num1] [num2] ... - demonstrate selection sort on a list of numbers"},
        {"insertion", demo_insertion, "[num1] [num2] ... - demonstrate insertion sort on a list of numbers"},
        {"binaryinsertion", demo_binary_insertion, "[num1] [num2] ... - demonstrate binary insertion sort on a list of numbers"},
        {"test", test, "run unit-tests"},
        {"perf", perf, "[avg(default)|best|worst] - run performance analysis on selected case"},
        {"bench", bench, "[avg(default)|best|worst] - run benchmarks on selected case"},
    };
    return runCommandLoop(commands);
}