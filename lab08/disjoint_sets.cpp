#include "disjoint_sets.h"

#include "catch2.hpp"
#include <iostream>

namespace lab08
{
	/**
	 * @brief A node in the disjoint set data structure.
	 * TODO: Define the structure fields here.
	 */
	struct Node
	{
		// TODO: Add necessary fields
	};

	/**
	 * @brief An edge in a graph.
	 * TODO: Define the structure fields here.
	 */
	struct Edge
	{
		// TODO: Add necessary fields
	};

	/**
	 * @brief A graph structure.
	 * TODO: Define the structure fields here.
	 */
	struct Graph
	{
		// TODO: Add necessary fields
	};

	void makeSet(Node* x, Operation* op)
	{
		// TODO: Implement makeSet operation
	}

	Node* findSet(Node* x, Operation* op)
	{
		// TODO: Implement findSet operation with path compression
		return nullptr;
	}

	void unionSets(Node* x, Node* y, Operation* op)
	{
		// TODO: Implement union operation with union by rank
	}

	Edge* kruskal(Graph* graph, int* mstSize, Operation* opFind, Operation* opUnion)
	{
		// TODO: Implement Kruskal's algorithm
		return nullptr;
	}

	Graph* createGraph(int numVertices, int numEdges)
	{
		// TODO: Allocate and initialize an undirected and connected graph with random edges and weights
		return nullptr;
	}

	void demonstrate(int size)
	{
		// TODO: Implement a demonstration of disjoint set operations
		// This might include:
		// 1. Creating several (10) sets using makeSet and showing the contents of the sets
		// 2. Performing union and find operations 5 times each and showing the contents of the sets
		// 3. Running Kruskal's algorithm on a small graph (5 nodes, 9 edges) and showing the chosen edges
	}

	void performance(Profiler& profiler)
	{
		// TODO: Implement the performance evaluation as described in the assignment
		// Evaluate the operations (MAKE_SET, UNION, FIND_SET) by running
		// Kruskal's algorithm on graphs of varying sizes
	}

	TEST_CASE("Disjoint Sets Operations")
	{
		// TODO: Implement unit tests for disjoint set operations
		// Use REQUIRE( [condition] ); to perform checks.

		SECTION("MAKE_SET") {
			// TODO: Test makeSet operation
		}

		SECTION("FIND_SET") {
			// TODO: Test findSet operation
		}

		SECTION("UNION") {
			// TODO: Test union operation
		}

		SECTION("KRUSKAL") {
			// TODO: Test Kruskal's algorithm
		}
	}

} // namespace lab08

