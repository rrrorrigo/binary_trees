#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_height - traverse recursively each level and return the depth
 *
 * @tree: pointer to tree
 * Return: length of printed tree after process
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (node->parent)
    {
        if (node->parent->right && node != node->parent->right)
        {
            return (node->parent->right);
        }
        if (node->parent->left && node != node->parent->left)
        {
            return (node->parent->left);
        }
    }
    return (NULL);

}