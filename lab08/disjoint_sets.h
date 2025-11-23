#ifndef __DISJOINT_SETS_H__
#define __DISJOINT_SETS_H__

#include "Profiler.h"
#include "commandline.h"

namespace lab08
{
	/**
	 * @brief A node in the disjoint set data structure.
	 * TODO: Define the necessary fields in the implementation file.
	 */
	struct Node;

	/**
	 * @brief An edge in a graph, used for Kruskal's algorithm.
	 * TODO: Define the necessary fields in the implementation file.
	 */
	struct Edge;

	/**
	 * @brief A graph structure containing vertices and edges.
	 * TODO: Define the necessary fields in the implementation file.
	 */
	struct Graph;

	/**
	 * @brief Creates a new set containing a single element.
	 * @param x The element to create a set for.
	 * @param op Optional profiler operation counter.
	 */
	void makeSet(Node* x, Operation* op = nullptr);

	/**
	 * @brief Finds the representative (root) of the set containing the given element.
	 * Uses path compression heuristic 
	 * @param x The element whose set representative to find.
	 * @param op Optional profiler operation counter.
	 * @return The representative of the set.
	 */
	Node* findSet(Node* x, Operation* op = nullptr);

	/**
	 * @brief Unites the sets containing elements x and y.
	 * Uses union by rank heuristic 
	 * @param x Element from the first set.
	 * @param y Element from the second set.
	 * @param op Optional profiler operation counter.
	 */
	void unionSets(Node* x, Node* y, Operation* op = nullptr);

	/**
	 * @brief Implements Kruskal's algorithm to find the Minimum Spanning Tree.
     * Depending on your implementation, you may need to also add operation for makeSet
	 * @param graph The input graph.
	 * @param mstSize Output parameter for the size of the MST.
	 * @param opFind Optional profiler operation counter for findSet.
	 * @param opUnion Optional profiler operation counter for unionSets.
	 * @return An array of edges that form the MST.
	 */
	Edge* kruskal(Graph* graph, int* mstSize, Operation* opFind = nullptr, Operation* opUnion = nullptr);

	/**
	 * @brief Creates a graph with the given number of vertices and edges.
     * Depending on your implementation, you may need to add operation for makeSet
	 * @param numVertices Number of vertices in the graph.
	 * @param numEdges Number of edges in the graph.
	 * @return A pointer to the newly created graph.
	 */
	Graph* createGraph(int numVertices, int numEdges);

	/**
	 * @brief Demo code for disjoint set operations and Kruskal's algorithm.
	 * @param size Number of elements to demonstrate on.
	 */
	void demonstrate(int size);

	/**
	 * @brief Performance analysis for disjoint set operations.
	 * @param profiler Profiler to use.
	 */
	void performance(Profiler& profiler);

	// You are free to add any other auxiliary functions you consider necessary

} // namespace lab08

#endif // __DISJOINT_SETS_H__

