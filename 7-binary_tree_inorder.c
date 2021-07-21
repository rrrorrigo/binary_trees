#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_inorder - function that goes through a binary tree
 * @tree: pointer to node of binary tree
 * @func: pointer to function with parameter int
 * Return: length of printed tree after process
 *
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return NULL;
	if (tree->left)
	{
		binary_tree_inorder(tree->left, func);
	}
	func(tree->n);
	if (tree->right)
	{
		binary_tree_inorder(tree->right, func);
	}
}
