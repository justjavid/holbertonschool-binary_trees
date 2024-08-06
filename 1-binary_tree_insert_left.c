#include "binary_trees.h"

/**
 *  binary_tree_insert_left - inserts a node as the left-child of another node
 *  @parent: pointer to the node to insert the left-child in
 *  @value: value of new node
 *  Return: pointer to created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new || !parent)
		return (NULL);
	new->n = value;
	if (parent->left)
	{
		new->left = parent->left;
		(parent->left)->parent = new;
		parent->left = new;
	}
	else
	{
		parent->left = new;
		new->parent = parent;
		new->left = NULL;
	}
	new->parent = parent;
	new->right = NULL;
	return (new);
}
