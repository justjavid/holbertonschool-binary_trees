#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	else
	{
		return binary_tree_height(tree->left) + binary_tree_height(tree->right) + 1;
	}
}
