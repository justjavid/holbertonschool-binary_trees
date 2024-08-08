#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree.
 * @node: Pointer to the node to find the uncle.
 *
 * Return: Pointer to the uncle node, or NULL if no uncle exists.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
        return (NULL);

    /* Find the grandparent */
    binary_tree_t *grandparent = node->parent->parent;

    /* Return the uncle (the sibling of the parent) */
    if (grandparent->left == node->parent)
        return (grandparent->right);
    else
        return (grandparent->left);
}
