#include "binary_trees.h"
/**
 * binary_tree_is_leaf - know if a node is a leaf
 *
 * @node: node to study
 *
 * Return: 1 if it is a leaf or 0 if not
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right)
		return (1);
	return (0);
}
