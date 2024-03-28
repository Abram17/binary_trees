#include "binary_trees.h"

/**
 * binary_tree_insert_right - add a new node to the right
 *
 * @parent: parent of the node
 * @value: node value
 *
 * Return: new node if success or null if failed
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	if (parent->right)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;
	return (new);
}
