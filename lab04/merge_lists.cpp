#include "merge_lists.h"

#include "catch2.hpp"

#include <iostream>

namespace lab04
{

	NodeT* create_node(int value) 
	{
		// TODO: Function to create a node with a specified value, with next pointing to NULL.
		return NULL;
	}

	ListT* create_list(int* values, int n) 
	{
		// TODO: Function to create a list with values specified from the input array. If the array is empty or NULL, create an empty list.
		return NULL;
	}

	NodeT* remove_first(ListT* list) 
	{
		// TODO: Function to remove the first node from the list. Return the removed node. If the list is empty or NULL return NULL. 
		//       DO NOT forget to set the ->next of the removed node to NULL.
		return NULL;
	}

	void insert_last(ListT* list, NodeT* node) {
		// TODO: Function to insert a node as the tail of the list.
	}

	void print_list(ListT* list)
	{
		// TODO: Function to print the contents of the lists. A suggestive message should be printed if the list is empty or NULL.
	}

	bool is_empty(ListT* list)
	{
		// TODO: Return true if the list is empty. Return false otherwise.
		return true;
	}

	void destroy_list(ListT** list)
	{
		// TODO: Free the memory of each node and finally the memory allocated for the list.
	}


	//GENERATION AND MERGING ALGORITHMS
	ListT** generate_k_sorted_lists(int n, int k)
	{
		// TODO: Generate k sorted lists of equal size that have the sum of elements equal to n. The lists should be stored in an array.
		return NULL;
	}

	ListT* merge_2_lists(ListT* list_A, ListT* list_B)
	{
		// TODO: Merge two sorted lists.
		return NULL;
	}

	void min_heapify(ListT* lists[], int size, int i, Operation *op)
	{
		// TODO: Apply min-heapify considering the heads of the lists (you should swap the lists pointers based on the heads' values)
	}

	void build_heap_buttomup(ListT* lists[], int size, Operation* op)
	{
		// TODO: Build the heap of lists in a buttom-up manner using min-heapify.
	}

	ListT* merge_k_lists(ListT* lists[], int size, Operation* op)
	{
		// TODO: Merge the k sorted lists.
		return NULL;
	}

    void demonstrate(int n, int k)
    {
        // TODO: Write a small demo for the list operations, list generation and merging functions.
    }

    TEST_CASE("Merge lists")
    {
        // TODO: Write your unit tests here
        // Use REQUIRE( [condition] ); to perform checks
        // You can use the generate_k_sorted_lists to generate input data
        // and create a IsListSorted method to test the result of your sorting function on the lists.
        // For example:
        //   ListT* lists[100] = generate_k_sorted_lists(1000, 100)
		//	 ListT* sorted_list = merge_k_lists(lists, 100)
		//   for(int i=0; i<100; i++)
        //   	REQUIRE( IsListSorted(lists[i]) );
    }

    void performance(Profiler& profiler, ListsCase whichCase)
    {
        // TODO: Write your performance analysis here, as explained in the readme.
        // You should use profiler.createOperation to pass the counter to each sorting function
    }

} // namespace lab04
