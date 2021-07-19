#include "binary_trees.h"
#include <stdlib.h>

/**
 * delete_tree - Stores recursively each level in an array of strings
 *
 * @parent: Pointer to the node to print
 * @value: Offset to print
 * Return: length of printed tree after process
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (!node)
        return (0);
    if (!node->left && !node->right)
        return (1);
    else
        return (0);
}
