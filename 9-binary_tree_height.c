#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height of a binary tree.
 * @tree: a pointer to the root node of the tree to traverse.
 * Return: the height of the tree or 0 if tree is NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	if (tree->left >= tree->right)
	{
		height = binary_tree_height(tree->left);
	}
	else
	{
		height = binary_tree_height(tree->right);
	}

	return (1 + height);
}
