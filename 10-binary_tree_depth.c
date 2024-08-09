#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "binary_trees.h"
/**
 * binary_tree_depth - ...
 * @tree: ...
 *
 * Return: ...
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	binary_tree_t *node;
	size_t depth = 0;

	if (tree == NULL)
	{
		return (0);
	}
	node = tree->parent;
	while (node)
	{
		depth += 1;
		node = node->parent;
	}
	return (depth);
}
