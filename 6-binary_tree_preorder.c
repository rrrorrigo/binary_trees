#include "binary_trees.h"
#include <stdlib.h>

/**
 * 
 * binary_tree_preorder - Stores recursively each level in an array of strings
 *
 * @node: Offset to print
 * Return: length of printed tree after process
 *
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
        func(tree->n);
        if (tree->left)
                binary_tree_preorder(tree->left, func);
        if (tree->right)
                binary_tree_preorder(tree->right, func);
}
