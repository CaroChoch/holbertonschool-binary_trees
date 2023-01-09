#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that checks if a node is a leaf.
 * 
 * @node: pointer to the node to check.
 * 
 * Return: 0 if node is NULL.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL)
		return (1);

	if (node->right == NULL)
		return (1);

	else
		return (0);
}
