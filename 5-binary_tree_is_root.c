#include "binary_trees.h"
#include <stdlib.h>
/**
 * 
 * binary_tree_is_root - Stores recursively each level in an array of strings
 *
 * @node: ponter to the node to check
 * Return: length of printed tree after process
 *
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->parent)
		return (1);
	return (0);
}
