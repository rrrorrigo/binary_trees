#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_height - traverse recursively each level and return the depth
 *
 * @tree: pointer to tree
 * Return: length of printed tree after process
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size_l = 1;
	size_t size_r = 0;

	if (!tree)
		return (0);
	if (tree->left)
		size_l += binary_tree_nodes(tree->left);
	if (tree->right)
		size_r += binary_tree_nodes(tree->right);
	if (!tree->left && !tree->right)
		return (0);
	return (size_l + size_r);
}
