#include "binary_trees.h"
/**
 * binary_tree_is_leaf - ...
 * @node: ...
 *
 * Return: ...
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
        if (!node)
        {
                return (0);
  }
  if (node->right || node->left)
  {
    return (0);
  }
  return (1);
}
