#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the balance factor
 * of a binary tree.
 * @tree: pointer to the root node of the tree to measure the balance factor.
 *
 * Return: 0 if tree is NULL.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int lh, rh;

	lh = rh = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		lh = binary_tree_height(tree->left) + 1;

	if (tree->right)
		rh = binary_tree_height(tree->right) + 1;

	return (lh - rh);
}

/**
 * binary_tree_height - get the height of the binary tree
 * @tree: header of the current value
 * Return: int.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left, right = 0;

		left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((left > right) ? left : right);
	}
	return (0);
}
