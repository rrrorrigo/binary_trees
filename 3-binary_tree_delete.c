#include "binary_trees.h"
#include <stdlib.h>

/**
 * delete_tree - Stores recursively each level in an array of strings
 *
 * @parent: Pointer to the node to print
 * @value: Offset to print
 * Return: length of printed tree after process
 */

void delete_tree(binary_tree_t *node)
{
	if (node->left)
	{
		delete_tree(node->left);
		free(node->left);
	}
	if (node->right)
	{
		delete_tree(node->right);
		free(node->right);
	}

}
/**
 * binary_tree_delete - Stores recursively each level in an array of strings
 *
 * @tree: ponter to the root of the tree
 * Return: length of printed tree after process
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		delete_tree(tree);
		free(tree);
	}
}
