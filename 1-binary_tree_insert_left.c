#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert new node as left-child.
 * @parent: Pointer to parent node to create.
 * @value: int to put store in node.
 * Return: If success newNode or NULL if failed.
  */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = binary_tree_node(parent, value);

	if (newNode == NULL)
		return (NULL);

	/* Check if parent have already left son */
	if (parent->left != NULL)
	{
		/* Update newNode - parent Relation */
		newNode->left = parent->left;
		/* Insert newNode as left son */
		parent->left->parent = newNode;
	}
	parent->left = newNode;

	return (newNode);
}
