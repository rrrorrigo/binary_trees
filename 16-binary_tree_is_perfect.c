#include "binary_trees.h"
#include <stdlib.h>
#include "9-binary_tree_height.c"
/**
 * binary_tree_is_perfect - function that check if binary tree is perfect
 *
 * @tree: pointer to tree
 * Return: 1 if is perfect, 0 if it's not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (!tree)
		return (0);
	if (tree->left)
		l = binary_tree_height(tree->left);
	if (tree->right)
		r = binary_tree_height(tree->right);
	if (r == l)
		return (1);
	else
		return (0);
}
