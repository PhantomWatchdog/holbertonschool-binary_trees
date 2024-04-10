#include "binary_trees.h"

/**
 * binary_tree_depth - a function that measures the depth of a
 * node in a binary tree.
 * @tree: a pointer to the root node of the tree to traverse.
 * Return: the depth of a node in a binary tree or 0 if tree is NULL.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if (tree->parent != NULL)
		{
			return (1 + binary_tree_depth(tree->parent));
		}
		else
		{
			return (0);
		}
	}

	return (0);
}
