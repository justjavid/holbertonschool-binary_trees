<<<<<<< HEAD
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
	if (is_leaf(tree) && tree->parent)
		return (!(is_leaf(tree->parent->right) ^ is_leaf(tree->parent->left)));
	r = binary_tree_is_perfect(tree->right);
	l = binary_tree_is_perfect(tree->left);
	return (r & l);
}
=======
#include <stdbool.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "binary_trees.h"
/**
 * find_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: depth of the node, 0 if tree is NULL
 */
int find_depth(const binary_tree_t *tree)
{
  int depth = 0;

  while (tree)
  {
    depth += 1;
    tree = tree->left;
  }
  return (depth);
}
/**
 * is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * @level: depth of the current node
 * @depth: depth of the deepest node
 *
 * Return: 1 if tree is perfect, 0 otherwise
 */
bool is_prefect (const binary_tree_t *tree, int depth, int level)
{
  if (tree == NULL)
  {
    return (NULL);
  }
  if (tree->left == NULL && tree->right == NULL)
  {
    return (depth == level + 1);
  }
  if (tree->left == NULL || tree->right == NULL)
  {
    return false;
  }
  return (is_prefect(tree->left, depth, level + 1) && is_prefect(tree->right, depth, level + 1));
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
  int depth = find_depth(tree);
  return (is_prefect(tree, depth, 0));
}
>>>>>>> 1a8f0e6a6845fa9fe834b599d9edbec352dba219
