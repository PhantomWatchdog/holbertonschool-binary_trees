#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: The root node of tree from wich we measure the height.
 * Return: If tree is NULL return 0, else return height.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t leftHeight = 0, rightHeight = 0;

		leftHeight = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		rightHeight = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((leftHeight > rightHeight) ? leftHeight : rightHeight);
	}
	return (0);
}

/**
 * binary_tree_is_perfect - Check if tree is perfect.
 * @tree: The root node of the tree to traverse.
 * Return: If perfect return 1, if not return 0.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree)
	{
		int leftHeight = binary_tree_height(tree->left),
		    rightHeight = binary_tree_height(tree->right);

		if (tree->left == NULL && tree->right == NULL)
		{
			return (1);
		}

		if (leftHeight != rightHeight)
		{
			return (0);
		}
	}
	if (tree == NULL)
	{
		return (0);
	}

	return (binary_tree_is_perfect(tree->left)
			&& binary_tree_is_perfect(tree->right));
}
