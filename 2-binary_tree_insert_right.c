#include "binary_trees.h"

/**
 *binary_tree_insert_right - A function that inserts a
 *			node as the right-child of another node
 *@parent: a pointer to the node to insert the right-child in.
 *@value: The value to store in the new node.
 *
 *Return: Pointer to the created node or NULL on failure
 *	if parent s NULL.
 *
 * Description - If parent already has a right-child,
 *		the new node must take its place,
 *		and the old right-child must be set
 *		as the right-child of the new node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	if (parent == NULL)
	{
		return (NULL);
	}

	temp = binary_tree_node(parent, value);

	if (temp == NULL)
	{
		return (NULL);
	}

	if (parent->right != NULL)
	{
		temp->right = parent->right;
		parent->right->parent = temp;
	}
	parent->right = temp;

	return (temp);
}
