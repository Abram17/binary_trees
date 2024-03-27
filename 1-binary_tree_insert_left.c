#include "binary_trees.h"

/**
 * binary_tree_insert_left - add a new node to the left
 *
 * @parent: parent of the node
 * @value: value of the node
 *
 * Return: the created node or null if not
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
	{
		return (NULL);
	}
	new = binary_tree_node(parent, value);
	if (!new)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;
	return (new);
}
