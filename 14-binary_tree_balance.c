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
int height(binary_tree_t *node) {
  if (node == NULL) {
    return (-1);
  }
  int left = height(node->left);
  int right = height(node->right);

  if (left > right) {
    return left += 1;
  }
  else {
    return right += 1;
  }
}
/**
 * binary_tree_balance - ...
 * @tree: ...
 *
 * Return: ...
 */
int binary_tree_balance(const binary_tree_t *tree) {
  if (tree == NULL)
  {
    return (0);
  }
  int left = height(tree->left);
  int right = height(tree->right);
  return (left - right);
}
