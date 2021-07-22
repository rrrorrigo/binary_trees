#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
#include "11-binary_tree_size.c"
#include "9-binary_tree_height.c"
/**
 * _pow_recursion - check the code for Holberton School students.
 * @x: base number
 * @y: exponential number
 * Return: the result
 */
size_t _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));

}
/**
 * binary_tree_is_perfect - function that check if binary tree is perfect
 *
 * @tree: pointer to tree
 * Return: 1 if is perfect, 0 if it's not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{

	size_t height = binary_tree_height(tree) + 1;

	if (!tree)
		return (0);
	if ((binary_tree_size(tree) + 1) == _pow_recursion(2, height))
		return (1);
	return (0);
}
