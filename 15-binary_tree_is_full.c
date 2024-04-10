#include "binary_trees.h"

/**
 * binary_tree_is_full - Check if tree is full or not.
 * @tree: The root node of the tree to traverse.
 * Return: If tree is NULL return 0.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (1);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}

	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
