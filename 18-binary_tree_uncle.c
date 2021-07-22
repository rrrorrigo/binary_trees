#include "binary_trees.h"
#include <stdlib.h>
#include "17-binary_tree_sibling.c"
/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: pointer to tree
 * Return: uncle of a node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (node->parent)
		return (binary_tree_sibling(node->parent));
	else
		return (NULL);
}
