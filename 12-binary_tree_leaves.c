#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * 
 * binary_tree_leaves - traverse recursively each level and return the depth
 *
 * @tree: pointer to tree
 * Return: length of printed tree after process
 *
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t size_l = 1;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (size_l);
	else if (!tree->left || !tree->right)
		return (size_l);

	return (size_l += 1);
}
