#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_depth - traverse recursively each level and return the depth
 *
 * @tree: pointer to tree
 * Return: depth of a node
 *
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree)
		if (tree->parent)
			depth = 1 + binary_tree_depth(tree->parent);
	return (depth);
}
