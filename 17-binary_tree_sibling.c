#include "binary_trees.h"

/**
 * binary_tree_sibling - function search node sibling
 * of a binary tree.
 * @node: pointer to the node
 *
 * Return: 0 if tree is NULL.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node->parent)
		return (NULL);

	if (node->n == node->parent->left->n)
	{
		if (!node->parent)
			return (0);
		return (node->parent->right);
	}

	if (node->n == node->parent->right->n)
	{
		if (!node->parent)
			return (0);
		return (node->parent->left);
	}
	return (node->parent);
}
