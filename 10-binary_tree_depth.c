#include "binary_trees.h"

/**
 * binary_tree_depth - depth of a node
 *
 * @tree: node to check the depth
 *
 * Return: 0 if it's a root or the depth
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
