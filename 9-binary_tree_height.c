#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
	{
		return (0);
	}
	else
	{
		l = binary_tree_height(tree->left);
		if (tree->left)
			l++;
		r = binary_tree_height(tree->right);
		if (tree->right)
			r++;
		if (l >= r)
			return (l);
		else
			return (r);
	}
}
