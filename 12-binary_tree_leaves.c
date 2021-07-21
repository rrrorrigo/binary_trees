#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 *
 * @tree: pointer to tree
 * Return: the number of leaves in a binary tree
 *
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (l + 1);
	l = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (l);
}
