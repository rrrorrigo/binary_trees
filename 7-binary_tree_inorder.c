#include "binary_trees.h"
#include <stdlib.h>

/**
 * 
 * binary_tree_inorder - Stores recursively each level in an array of strings
 *
 * @node: Offset to print
 * Return: length of printed tree after process
 *
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
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
