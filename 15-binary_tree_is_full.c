#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_height - traverse recursively each level and return the depth
 *
 * @tree: pointer to tree
 * Return: length of printed tree after process
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int r;

	if (!tree)
		return (0);
    if (tree->left)
        r = binary_tree_is_full(tree->left);
    if (tree->right)
        r = binary_tree_is_full(tree->right);
    if (r == 0)
        return (0);
    if ((!tree->left && !tree->right) || (tree->left && tree->right))
	    return (1);
    else
	    return (0);
}
