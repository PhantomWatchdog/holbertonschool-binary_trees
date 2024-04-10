#include "binary_trees.h"

/**
 * binary_tree_node - a function that finds the uncle of a node.
 * @node: a pointer to the node to find the uncle.
 * Return: NULL if node, the parent is NULL or if node has no uncle else
 * a pointer to the uncle.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle, *parent;

	if (node)
	{
		if (node->parent)
		{
			uncle = node->parent;
			parent = node->parent->parent;

			if (node->parent->parent)
			{
				if (uncle->left == node)
				{
					return (uncle->parent->left);
				}
			}

			if (node->parent-parent)
			{
				if (uncle->right == node)
				{
					return (uncle->parent->right);
				}
			}

			return (NULL);
		}

		return (NULL);
	}

	return (NULL);
}
