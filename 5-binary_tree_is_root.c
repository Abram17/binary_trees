#include "binary_trees.h"

/**
 * binary_tree_is_root - Function that checks if a node is a root
 *
 * @node: Node to check
 *
 * Return: 1 if it is 0 if not
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);
	return (1);
}
