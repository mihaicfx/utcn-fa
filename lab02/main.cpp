#include "heap.h"

#define CATCH_CONFIG_RUNNER
#include "catch2.hpp"

#include "commandline.h"
#include "Profiler.h"

#include <cstdio>
#include <string>
#include <vector>

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

void print_array(const char* message, const std::vector<int>& values)
{
    printf("%s: ", message);
    for (int value : values) {
        printf("%d ", value);
    }
    printf("\n");
}

std::vector<int> read_array(const CommandArgs& args)
{
    std::vector<int> v;
    for (const auto& arg : args) {
        v.push_back(atoi(arg));
    }
    return v;
}

void demo_heap_build(const CommandArgs& args, void (*build_func)(int*, int, Operation*, Operation*))
{
    std::vector<int> v = read_array(args);

    build_func(v.data(), static_cast<int>(v.size()), nullptr, nullptr);
    print_array("Heap:", v);
}

void demo_heapsort(const CommandArgs& args) {
    std::vector<int> v = read_array(args);

    heapSort(v.data(), static_cast<int>(v.size()));
    print_array("Sorted:", v);
}

void demo_bottomup(const CommandArgs& args) {
    demo_heap_build(args, buildHeap_BottomUp);
}

void demo_topdown(const CommandArgs& args) {
    demo_heap_build(args, buildHeap_TopDown);
}

int main()
{
    const std::vector<CommandSpec> commands =
    {
        {"demo", demo, "run demo"},
        {"heapsort", demo_heapsort, "[num1] [num2] ... - demonstrate Heap Sort"},
        {"bottomup", demo_bottomup, "[num1] [num2] ... - demonstrate Bottom-Up Build-Heap"},
        {"topdown", demo_topdown, "[num1] [num2] ... - demonstrate Top-Down Build-Heap"},
        {"test", test, "run unit-tests"},
        {"perf", perf, "[avg(default)|best|worst] - run performance analysis on selected case"},
        {"bench", bench, "[avg(default)|best|worst] - run benchmarks on selected case"},
    };
    return runCommandLoop(commands);
}