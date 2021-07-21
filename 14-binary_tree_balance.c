#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_balance - function that measures the balance factor of a binary_t
 *
 * @tree: pointer to tree
 * Return: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int size_l = 0;
	int size_r = 0;

	if (!tree)
		return (0);
	if (tree->left)
		size_l = 1 + binary_tree_balance(tree->left);
	if (tree->right)
		size_r = 1 + binary_tree_balance(tree->right);
	return (size_l - size_r);
}
