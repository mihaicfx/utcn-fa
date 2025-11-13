#ifndef __MULTIWAY_H__
#define __MULTIWAY_H__

namespace lab06
{
	/**
	 * @brief A node in a binary tree.
	 * Used for R3 (first child/right sibling representation).
	 */
	struct TreeNode
	{
		int key;
		TreeNode* left;
		TreeNode* right;
	};

	/**
	 * @brief Performs a recursive traversal of a binary tree.
	 * @param root The root of the binary tree.
	 */
	void recursiveTraversal(TreeNode* root);

	/**
	 * @brief Performs an iterative traversal of a binary tree.
	 * @param root The root of the binary tree.
	 */
	void iterativeTraversal(TreeNode* root);

	/**
	 * @brief A node in a multi-way tree.
	 * Used for R2 representation.
	 */
	struct MultiWayTreeNode;

	/**
	 * @brief A node in a binary representation tree.
	 * Used for R3 (first child/right sibling representation).
	 */
	struct BinaryTreeNode;

	/**
	 * @brief Pretty prints a tree from the parent array representation (R1).
	 * @param parentArray The parent array.
	 */
	void prettyPrintR1(const int* parentArray, int n);

	/**
	 * @brief Pretty prints a tree from the multi-way tree representation (R2).
	 * @param root The root of the multi-way tree.
	 */
	void prettyPrintR2(MultiWayTreeNode* root);

	/**
	 * @brief Pretty prints a tree from the binary tree (first child/right sibling) representation (R3).
	 * @param root The root of the binary tree.
	 */
	void prettyPrintR3(BinaryTreeNode* root);

	/**
	 * @brief Transforms a tree from parent array representation (R1) to multi-way tree representation (R2).
	 * @param parentArray The parent array.
	 * @return The root of the newly created multi-way tree.
	 */
	MultiWayTreeNode* transformR1toR2(const int* parentArray, int n);

	/**
	 * @brief Transforms a tree from multi-way tree representation (R2) to binary tree (first child/right sibling) representation (R3).
	 * @param root The root of the multi-way tree.
	 * @return The root of the newly created binary tree.
	 */
	BinaryTreeNode* transformR2toR3(MultiWayTreeNode* root);

} // namespace lab06

#endif // __MULTIWAY_H__