#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_node - Stores recursively each level in an array of strings
 *
 * @parent: Pointer to the node to print
 * @value: Offset to print
 * Return: length of printed tree after process
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));
	if (!node)
		return NULL;
	

	node->left = NULL;
	node->right = NULL;
	node->parent = parent;
	node->n = value;
	return (node);
}
