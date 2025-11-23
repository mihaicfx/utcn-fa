#include "disjoint_sets.h"

#define CATCH_CONFIG_RUNNER
#include "catch2.hpp"

#include "commandline.h"
#include "Profiler.h"

#include <cstdio>
#include <string>
#include <iostream>
#include <vector>

using namespace lab08;

Profiler profiler("Disjoint Sets");

void demo(const CommandArgs& args)
{
	const int size = args.empty() ? 10 : atoi(args[0]);
	demonstrate(size);
}

void test(const CommandArgs& args)
{
	static Catch::Session session;
	session.run();
}

void perf(const CommandArgs& args)
{
	performance(profiler);
	profiler.showReport();
}

int main()
{
	const std::vector<CommandSpec> commands =
	{
		{"demo", demo, "run demo"},
		{"test", test, "run unit-tests"},
		{"perf", perf, "run performance analysis"}
	};
	return runCommandLoop(commands);
}

