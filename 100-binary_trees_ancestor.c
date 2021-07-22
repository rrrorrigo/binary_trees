#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
#include "10-binary_tree_depth.c"
/**
 * binary_trees_ancestor - function that finds the lowest common ancestor.
 * @first: base number
 * @second: exponential number
 * Return: pointer to ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	size_t detph_f, detph_s;
	binary_tree_t *fp, *sp, *f, *s;

	if (!first || !second)
		return (NULL);
	f = (binary_tree_t *)first;
	s = (binary_tree_t *)second;
	if (!first->parent)
		return (f);
	if (!second->parent)
		return (s);
	fp = first->parent;
	sp = second->parent;
	detph_f = binary_tree_depth(first);
	detph_s = binary_tree_depth(second);
	if (fp == s)
		return (fp);
	if (sp == f)
		return (sp);
	if (fp == sp)
		return (fp);
	if (detph_f == detph_s)
		return (binary_trees_ancestor(fp, sp));
	if (detph_f > detph_s)
		return (binary_trees_ancestor(fp, s));
	else
		return (binary_trees_ancestor(sp, f));
	return (NULL);
}
