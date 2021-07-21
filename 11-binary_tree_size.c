#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_size - function that measures the size of a binary tree
 *
 * @tree: pointer to tree
 * Return: size of binary tree
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
	if (tree->right)
		size_r = binary_tree_size(tree->right);
	return (size_l + size_r + 1);
}
