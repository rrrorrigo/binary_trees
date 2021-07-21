#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_sibling - function that finds the sibling of a node
 *
 * @node: pointer to tree
 * Return: pointer to sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node->parent)
	{
		if (node->parent->right && node != node->parent->right)
		{
			return (node->parent->right);
		}
		if (node->parent->left && node != node->parent->left)
		{
			return (node->parent->left);
		}
	}
	return (NULL);

}
