#include "binary_trees.h"

/**
 * binary_tree_is_root - Check if node is root.
 * @tree: a pointer to the root node of the tree to traverse.
 * @func: a pointer to a function to call for each node.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	/**
	 * Call binary_tree_inorder recursively for each
	 * node from the left to the right.
	 */
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}

