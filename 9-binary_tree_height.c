#include "binary_trees.h"

/**
 * binary_tree_height - Check the height of a binary tree.
 * @tree: The root node of the tree to traverse.
 * Return: Height of tree or 0 if tree is NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left = 0;
		size_t right = 0;

		if (tree->left != NULL)
		{
			left = 1 + binary_tree_height(tree->left);
		}
		else
		{
			left = 0;
		}
		if (tree->right != NULL)
		{
			right = 1 + binary_tree_height(tree->right);
		}
		else
		{
			right = 0;
		}
		if (left > right)
		{
			return (left);
		}
		else
		{
			return (right);
		}
	}
	return (0);
}
