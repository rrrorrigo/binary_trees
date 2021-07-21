#include "binary_trees.h"
#include <stdlib.h>
#include "17-binary_tree_sibling.c"

/**
 * binary_tree_height - traverse recursively each level and return the depth
 *
 * @tree: pointer to tree
 * Return: length of printed tree after process
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (node->parent)
        return (binary_tree_sibling(node->parent));
    else
        return NULL;
}
