#include "binary_trees.h"

/**
 * binary_tree_insert_left - Stores recursively each level in an array of strings
 *
 * @parent: Pointer to the node to print
 * @value: Offset to print
 * Return: length of printed tree after process
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *node = malloc(sizeof(binary_tree_t));
	if (!node)
		return NULL;
	
		
	node->left = parent;
	node->right = NULL;
	node->parent = parent->parent;
	node->n = value;
}
