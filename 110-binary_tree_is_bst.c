#include "binary_trees.h"

/**
 * bst - Checks if valid BST
 * @tree: Pointer to root node being checked
 * @min: Int min
 * @max: Int max
 *
 * Return: 1 if valid BST, 0 if not
 */

int bst(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);

	if (tree->n <= min)
		return (0);
	if (tree->n >= max)
		return (0);

	return (bst(tree->right, tree->n, max) && bst(tree->left, min, tree->n));
}

/**
 * binary_tree_is_bst - function that checks if a binary tree is a valid
 * Binary Search Tree.
 * @tree: pointer to the root node of the tree to check.
 * Return: if tree is NULL, return 0.
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (bst(tree, INT_MIN, INT_MAX));
}
