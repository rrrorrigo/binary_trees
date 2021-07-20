#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_height - traverse recursively each level and return the depth
 *
 * @tree: pointer to tree
 * Return: length of printed tree after process
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t l = 0;
	size_t r = 0;

	if (!tree)
		return (0);
    if (tree->left)
        l = binary_tree_is_perfect(tree->left);
    if (tree->right)
        r = binary_tree_is_perfect(tree->right);
    if (r == l)
        return (1);
    else
        return (0);
}
