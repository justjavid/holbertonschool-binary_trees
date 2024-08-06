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
  binary_tree_t *tmp;

  tmp = malloc(sizeof(binary_tree_t));
  if (tmp == NULL)
  {
    return (NULL);
  }
  tmp->left = NULL;
  tmp->parent = parent;
  tmp->right = value;
  return (tmp);
}
