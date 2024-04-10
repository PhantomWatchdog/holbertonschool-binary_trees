#include "binary_trees.h"

/**
 * binary_tree_sibling - a function that finds the sibling of a node.
 * @node: a pointer to the node to find the sibling.
 * Return: NULL if node, the parent is NULL or if node has no sibling else
 * a pointer to the sibling node.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node)
	{
		parent = node->parent;

		if (parent == NULL)
		{
			return (NULL);
		}

		if (parent->left == node)
		{
			return (parent->right);
		}

		if (parent->right == node)
		{
			return (parent->left);
		}
	}

	return (NULL);
}
