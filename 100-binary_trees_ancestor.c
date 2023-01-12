#include "binary_trees.h"

/**
 * binary_trees_ancestor - check for the closer ancestor
 * of a binary tree.
 * @first: first pointer to the node
 * @second: second pointer to the node
 * Return: the closest ancestor.
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	if (first->parent->n == second->parent->n)
		return (first->parent);
	if (first->parent->n == second->parent->parent->n)
		return (first->parent);
	if (second->parent->n == first->parent->parent->n)
		return (second->parent);
	if (first->parent->parent->n == second->parent->parent->parent->n)
		return (first->parent->parent);
	if (second->parent->parent->n == first->parent->parent->parent->n)
		return (first->parent->parent);
	return (first->parent);
}
