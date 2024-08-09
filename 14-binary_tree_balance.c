#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "binary_trees.h"
/**
 * height - ...
 * @node: ...
 *
 * Return: ...
 */
int height(binary_tree_t *node)
{
	int left, right;

	if (node == NULL)
	{
		return (-1);
	}
	left = height(node->left);
	right = height(node->right);

	if (left > right)
	{
		return (left += 1);
	}
	return (right += 1);
}
/**
 * binary_tree_balance - ...
 * @tree: ...
 *
 * Return: ...
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
	{
		return (0);
	}
	left = height(tree->left);
	right = height(tree->right);
	return (left - right);
}
