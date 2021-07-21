#include "binary_trees.h"
#include <stdlib.h>

/**
 * 
 * binary_tree_depth - traverse recursively each level and return the depth
 *
 * @tree: pointer to tree
 * Return: length of printed tree after process
 *
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree->parent)
		return (depth);
	else
		depth = 1 + binary_tree_depth(tree->parent);
	return (depth);
}
