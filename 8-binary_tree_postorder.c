#include "binary_trees.h"

/**
 * binary_tree_postorder - a function that goes through a binary
 * tree using post-order traversal.
 * @tree: a pointer to the root node of the tree to traverse.
 * @func: a function to call for each node.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	/**
	 * Call binary_tree_postorder recursively in beginning
	 * by the left subtree, then the right subtree and finally
	 * the node
	 */
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
