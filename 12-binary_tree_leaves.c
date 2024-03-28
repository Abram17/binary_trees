#include "binary_trees.h"

/**
 * binary_tree_leaves - number of leaves in a tree
 *
 * @tree: tree
 *
 * Return: number of leaves
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t num = 0, l = 0, r = 0;

	if (!tree)
	{
		return (0);
	}
	else
	{
		l = binary_tree_leaves(tree->left);
		r = binary_tree_leaves(tree->right);
		num = l + r;
		return ((!l && !r) ? num + 1 : num);
	}
}
