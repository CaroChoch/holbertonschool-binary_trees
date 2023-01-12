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
	if ((!node || (node->parent == NULL)))
		return (NULL);

	if (node->n == node->parent->left->n)
		return (node->parent->right);
	else
		return (node->parent->left);

	if (node->n == node->parent->right->n)
		return (node->parent->left);
	else
		return (node->parent->right);
	if ((!node || (node->parent->parent == NULL)))
		return (NULL);
}
