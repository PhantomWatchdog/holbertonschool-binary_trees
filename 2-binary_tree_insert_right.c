#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert new node as right-child.
 * @parent: Pointer to parent node to create.
 * @value: int to put store in node.
 * Return: If success newNode or NULL if failed.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = binary_tree_node(parent, value);

	if (newNode == NULL)
		return (NULL);

	/* Check if parent have already right son */
	if (parent->right != NULL)
	{
		/* Update newNode - parent Relation */
		newNode->right = parent->right;
		/* Insert newNode as right son */
		parent->right->parent = newNode;
	}
	parent->right = newNode;

	return (newNode);
}
