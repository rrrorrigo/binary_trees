#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_nodes - function that counts the nodes with at least 1 child
 *
 * @tree: pointer to tree
 * Return: number of nodes with at least 1 child, otherwise 0
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
