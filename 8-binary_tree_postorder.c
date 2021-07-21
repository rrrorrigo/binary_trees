#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_postorder - function that goes through a binary tree
 * @tree: pointer to the root
 * @func: pointer to function with parameter int
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		if (tree->left)
		{
			binary_tree_postorder(tree->left, func);
		}
		if (tree->right)
		{
			binary_tree_postorder(tree->right, func);
		}
		func(tree->n);
	}
}
