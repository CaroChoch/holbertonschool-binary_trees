#include "binary_trees.h"

/**
 * binary_tree_uncle - function search node uncle
 * of a binary tree.
 * @node: pointer to the node
 *
 * Return: 0 if tree is NULL.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if ((node == NULL || node->parent == NULL || node->parent->parent == NULL))
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->parent->left);
	return (node->parent->parent->right);
}
