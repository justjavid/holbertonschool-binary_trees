#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "binary_trees.h"
/**
 * binary_tree_preorder - ...
 * @tree: ...
 * @func: ...
 *
 * Return: ...
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
  if (tree == NULL || func == NULL)
  {
    return;
  }
  binary_tree_preorder(tree->left, *func);
  binary_tree_preorder(tree->right, *func);
  func(tree->n);
}
