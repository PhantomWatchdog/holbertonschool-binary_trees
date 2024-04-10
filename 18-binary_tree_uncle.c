#include "binary_trees.h"

/**
 * binary_tree_uncle - Find the uncle of a node.
 * @node: The node from which search the uncle.
 * Return: If !node or !uncle return NULL, else return uncle.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->parent->left == node->parent)
	{
		return (node->parent->parent->right);
	}

	else
	{
		return (node->parent->parent->left);
	}
}
