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
	if (node == NULL || node-> parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return(node->parent->left);
}
