#include "binary_trees.h"

/**
 * binary_tree_preorder - Move through a tree with pre-order traversal.
 * @tree: The root node of the tree to traverse.
 * @func: Function to call for each node.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
