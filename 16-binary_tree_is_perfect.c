#include "binary_trees.h"
#include "15-binary_tree_is_full.c"

/**
 * is_leaf - function
 * @node: pointer
 * Return: 0 or 1
 */


int is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 * Return: 0 or 1
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int r, l;

	if (!tree || !binary_tree_is_full(tree))
		return (0);
	if (!tree->parent && !tree->left && !tree->right)
		return (1);
	if (is_leaf(tree) && tree->parent)
		return (!(is_leaf(tree->parent->right) ^ is_leaf(tree->parent->left)));
	r = binary_tree_is_perfect(tree->right);
	l = binary_tree_is_perfect(tree->left);
	return (r & l);
}
