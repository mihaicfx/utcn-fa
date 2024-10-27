#ifndef __MERGE_LISTS_H__
#define __MERGE_LISTS_H__

#include "Profiler.h"
#include "commandline.h"

namespace lab04
{

	//LIST HANDLING STRUCTURES AND FUNCTIONS 

	typedef struct node{
		int value;
		node* next;
	}NodeT;

	typedef struct list {
		node* first; // pointer to the head of the list
		node* last; // pointer to the tail of the list
	}ListT;

	/**
	 * @brief Function to create a node with a specified value, with next pointing to NULL.
	 *
	 * @param value the initial value of the node
	 * @return the created node
	 */
	NodeT* create_node(int value);

	/**
	 * @brief Function to create a list with values specified from the input array. If the array is empty or NULL, create an empty list.
	 *        You can use the insert_last function to insert the elements.
	 *
	 * @param values array of input values to be stored in a list
	 * @param n number of values in the input array
	 * @return the created list
	 */
	ListT* create_list(int* values = nullptr, int n = 0);

	/**
	 * @brief Function to remove the first node from the list. Return the removed node. If the list is empty or NULL return NULL.
	 *		  DO NOT forget to set the ->next of the removed node to NULL.
	 *
	 * @param list the list from which we want to remove the first node
	 * @return the removed node or NULL if the lists is empty or NULL.
	 */
	NodeT* remove_first(ListT* list);

	/**
	 * @brief Function to insert a node as the tail of the list.
	 *
	 * @param list the list where we want to insert a new head.
	 * @param node the node to be inserted
	 */
	void insert_last(ListT* list, NodeT* node);

	/**
	 * @brief Function to print the contents of the lists. A suggestive message should be printed if the list is empty or NULL.
	 *
	 * @param list the list that should be printed
	 */
	void print_list(ListT* list);

	/**
	 * @brief Returns true if the list is empty (or NULL).
	 *
	 * @param list the list of elements.
	 */
	bool is_empty(ListT* list);

	/**
	 * @brief Free the memory of each node and finally the memory allocated for the list.
	 *
	 * @param list the list to be destroyed. 
	 */
	void destroy_list(ListT** list);


	//GENERATION AND MERGING ALGORITHM

	/**
	 * @brief Generate k sorted lists of equal size that have the sum of elements equal to n. The lists should be stored in an array.
	 *
	 * @param n the total number of elements of the k lists
	 * @param k the number of lists
	 * 
	 * @return the array of lists
	 */
	ListT** generate_k_sorted_lists(int n, int k);

	/**
	 * @brief The algorithm of merging two sorted lists.
	 *
	 * @param list_A the first list
	 * @param list_B the second list
	 * @return the resulting ascendingly sorted list.
	 */
	ListT* merge_2_lists(ListT* list_A, ListT* list_B);

	/**
	 * @brief MIN-Heapify function that works on lists heads.
	 *
	 * @param lists the heap (array) of list
	 * @param size number of lists in the array
	 * @param i the index of the list we want to heapify (sink)
	 * @param op optional counter for operations 
	 */
	void min_heapify(ListT* lists[], int size, int i, Operation *op = nullptr);

	/**
	 * @brief Building the heap of lists in a buttom-up manner using min-heapify.
	 *
	 * @param lists the array of list
	 * @param size number of lists in the array
	 * @param op optional counter for operations 
	 */
	void build_heap_buttomup(ListT* lists[], int size, Operation *op = nullptr);

	/**
	 * @brief The algorithm of merging the k sorted lists.
	 *
	 * @param lists the array of list
	 * @param size number of lists in the array
	 * @param op optional counter for operations 
	 * @return the resulting ascendingly sorted list.
	 */
	ListT* merge_k_lists(ListT* lists[], int size, Operation* op = nullptr);


	/**
	 * @brief Demo code for the list functions, list generation and merging algorithms. 
	 *
	 * @param n the total number of elements
	 * @param k the total number of lists
	 */
	void demonstrate(int n, int k);

	/**
	 * @brief Performance analysis for the sorting algorithms
	 *
	 * @param profiler profiler to use
	 * @param whichCase one of FIXED_K or FIXED_N
	 */
	void performance(Profiler& profiler, ListsCase whichCase);

} // namespace lab04

#endif // __MERGE_LISTS_H__