#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "binary_trees.h"
/**
 * binary_tree_leaves - ...
 * @tree: ...
 *
 * Return: ...
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
  const binary_tree_t *node;
  size_t leaves = 0;

  if (tree == NULL)
  {
    return (0);
  }
  node = tree;
  if (node->left)
  {
    leaves += 1;
  }
  if (node->right)
  {
    leaves += 1;
  }
  else if (node->left == NULL && node->right == NULL)
  {
    leaves += 1;
  }
  return (leaves);
}
