#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree
 * Return: number of nodes isn't leave
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
	{
		return (0);
	}
	l = binary_tree_nodes(tree->left);
	r = binary_tree_nodes(tree->right);
	if (tree->left || tree->right)
		return (l + r + 1);
	else
		return (0);
}
