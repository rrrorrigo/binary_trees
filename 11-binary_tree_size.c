#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * 
 * binary_tree_height - traverse recursively each level and return the depth
 *
 * @tree: pointer to tree
 * Return: length of printed tree after process
 *
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_l = 0;
	size_t size_r = 0;

	if (!tree)
		return (0);
    if (tree->left)
        size_l = binary_tree_size(tree->left);
    /*printf("%ld\n", size_l);*/
    if (tree->right)
		size_r = binary_tree_size(tree->right);
    /*printf("%ld\n", size_r);*/
	return (size_l + size_r + 1);
}
