#ifndef __ORDER_STATISTICS_H__
#define __ORDER_STATISTICS_H__

namespace lab07
{
	/**
	 * @brief A node in an Order Statistics Tree.
	 * Each node is augmented with a 'size' field.
	 */
	struct OS_Node
	{
		int key;
		OS_Node* left;
		OS_Node* right;
		int size; // The number of nodes in the subtree rooted at this node (inclusive)
	};

	/**
	 * @brief Builds a balanced Order Statistics Tree containing keys from 1 to n.
	 * @param n The number of nodes.
	 * @return The root of the newly created tree.
	 */
	OS_Node* buildTree(int n);

	/**
	 * @brief Selects the node with the i-th smallest key in the tree.
	 * @param root The root of the tree.
	 * @param i The rank of the element to find (0-based index).
	 * @return A pointer to the node with the i-th smallest key, or nullptr if not found.
	 */
	OS_Node* osSelect(OS_Node* root, int i);

	/**
	 * @brief Deletes the node with the i-th smallest key from the tree.
	 * @param root The root of the tree.
	 * @param i The rank of the element to delete (0-based index).
	 * @return The root of the modified tree.
	 */
	OS_Node* osDelete(OS_Node* root, int i);

	/**
	 * @brief Pretty prints the tree to the console for visualization.
	 * @param root The root of the tree.
	 */
	void prettyPrint(OS_Node* root);

	/**
	 * @brief Demonstrates the functionality of the Order Statistics Tree operations.
	 * @param n The number of nodes for the initial tree build.
	 */
	void demo(int n);

	/**
	 * @brief Runs the performance evaluation for the management operations
	 * as described in the assignment requirements.
	 */
	void performance();

} // namespace lab07

#endif // __ORDER_STATISTICS_H__