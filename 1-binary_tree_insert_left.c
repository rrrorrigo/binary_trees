#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_left - Stores recursively each level in an array of str
 *
 * @parent: Pointer to the node to print
 * @value: Offset to print
 * Return: length of printed tree after process
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (!node)
                return (NULL);
	node->n = value;
	node->right = NULL;
	node->left = NULL;
	node->parent = parent;
	if (parent->left)
	{
		parent->left->parent = node;
		node->left = parent->left;
	}
	parent->left = node;

	return (node);
}
