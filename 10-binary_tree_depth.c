#include "binary_trees.h"

/**
 * binary_tree_depth - a function that measures the depth of a 
 * node in a binary tree.
 * @tree: a pointer to the root node of the tree to traverse.
 * Return: the depth of a node in a binary tree or 0 if tree is NULL.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t parent = 0;

		if (tree->parent != NULL)
		{
			parent = 1 + binary_tree_depth(tree->parent);
		}
		else
		{
			parent = 0;
		}

		return (parent);
	}
	return (0);
}
