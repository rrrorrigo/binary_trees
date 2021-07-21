#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_full - function that checks if a binary tree is full
 *
 * @tree: pointer to tree
 * Return: 1 if it's full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int r;

	if (!tree)
		return (0);
	if (tree->left)
		r = binary_tree_is_full(tree->left);
	if (tree->right)
		r = binary_tree_is_full(tree->right);
	if (r == 0)
		return (0);
	if ((!tree->left && !tree->right) || (tree->left && tree->right))
		return (1);
	else
		return (0);
}
