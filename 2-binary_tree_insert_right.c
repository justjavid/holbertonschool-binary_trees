#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_right - ...
 * @parent: ...
 * @value: ...
 *
 * Return: ...
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = NULL, *node = NULL;

	if (!parent)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	if (parent->right)
	{
		temp = parent->right;
		node->right = temp;
		temp->parent = node;
	}
	parent->right = node;
	return (node);
}
