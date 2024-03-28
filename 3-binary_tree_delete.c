#include "binary_trees.h"

/**
 * binary_tree_delete - free an entire tree
 *
 * @tree: tree to free
 *
 * Return: void
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
	{
		return;
	}
	else
	{
		if (tree)
		{
			binary_tree_delete(tree->left);
			binary_tree_delete(tree->right);
		}
		free(tree);
	}
}
