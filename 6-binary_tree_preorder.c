#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_preorder - function that goes through a binary tree
 * @tree: pointer to node of binary tree
 * @func: pointer to func with parameter type int
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	func(tree->n);
	if (tree->left)
		binary_tree_preorder(tree->left, func);
	if (tree->right)
		binary_tree_preorder(tree->right, func);
}
