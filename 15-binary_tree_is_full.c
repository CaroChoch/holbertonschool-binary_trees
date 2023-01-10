#include "binary_trees.h"

/**
 * binary_tree_is_full -  Check if the tree is full or not
 * in a binary tree.
 * @tree: pointer to the root node of the tree to count the number of nodes.
 * Return: 0 or 1 if the tree is full.
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
