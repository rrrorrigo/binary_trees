#include "binary_trees.h"
#include <stdlib.h>

/**
 * 
 * binary_tree_postorder - Stores recursively each level in an array of strings
 *
 * @node: Offset to print
 * Return: length of printed tree after process
 *
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
        if (tree->left)
        {
                binary_tree_postorder(tree->left, func);
        }
        if (tree->right)
        {
                binary_tree_postorder(tree->right, func);
        }
        func(tree->n);
}

