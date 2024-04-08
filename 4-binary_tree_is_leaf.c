#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Check node & return if is leaf or not.
 * @node: The node to check.
 * Return: 1 if node is leaf, if not or NULL 0.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
	{
		return (0);
	}

	return (1);
}
