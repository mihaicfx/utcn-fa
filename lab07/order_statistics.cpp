#include "order_statistics.h"

#include "catch2.hpp"
#include <iostream>

namespace lab07
{

	OS_Node* buildTree(int n)
	{
		// TODO: Implement the buildTree function
		return nullptr;
	}

	OS_Node* osSelect(OS_Node* root, int i)
	{
		// TODO: Implement the osSelect function
		return nullptr;
	}

	OS_Node* osDelete(OS_Node* root, int i)
	{
		// TODO: Implement the osDelete function
		return nullptr;
	}

	void prettyPrint(OS_Node* root)
	{
		// TODO: Implement the prettyPrint function
	}

	void demo(int n)
	{
		// TODO: Implement the demo function as described in the readme.
		// This might include:
		// 1. Calling buildTree(n) and pretty-printing the result.
		// 2. Calling osSelect for a few random ranks.
		// 3. Calling osDelete for a few random ranks and pretty-printing after each deletion.
	}

	void performance()
	{
		// TODO: Implement the performance evaluation as described in section 3.4 of the readme.
	}

	TEST_CASE("Order Statistics Tree")
	{
		// TODO: Implement unit tests for the Order Statistics Tree
		// Use REQUIRE( [condition] ); to perform checks.

		SECTION("BUILD TREE") {

        }
		SECTION("OS SELECT") {

        }
		SECTION("OS DELETE") {

        }
	}

} // namespace lab07
