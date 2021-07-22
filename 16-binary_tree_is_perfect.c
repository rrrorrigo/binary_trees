#include "binary_trees.h"
#include <stdlib.h>
#include "15-binary_tree_is_full.c"
#include "14-binary_tree_balance.c"
/**
 * binary_tree_is_perfect - function that check if binary tree is perfect
 *
 * @tree: pointer to tree
 * Return: 1 if is perfect, 0 if it's not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_is_full(tree) && !binary_tree_balance(tree));
}
