#include "binary_trees.h"
#include <stdlib.h>

/**
 * 
 * binary_tree_height - traverse recursively and return the length
 *
 * @tree: pointer to tree
 * Return: length of node
 *
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	if (tree->left)
		height_l = 1 + binary_tree_height(tree->left);
	else
		height_l = 0;

	if (tree->right)
	height_r = 1 + binary_tree_height(tree->right);
	else
		height_r = 0;
	if (height_l > height_r)
		return (height_l);
	return (height_r);
}
