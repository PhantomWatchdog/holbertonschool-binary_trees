#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary tree node.
 * @parent: Pointer to parent node to create.
 * @value: int to put in the node.
 * Return: If success newNode or NULL if failed.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	if (newNode == NULL)
	{
		return (NULL);
	}

	return (newNode);
}
