#include "binary_trees.h"

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


/**
 * _pow - returns the power of 2 size_t numbers.
 *
 * @x: First value.
 * @y: Second value.
 *
 * Return: Operation result.
 */

int _pow(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow(x, y - 1));
}

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree.
 * @tree: pointer to the root node of the tree to count the number of leaves.
 * Return: number of leaves, 0 if the tree is NULL.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	else
		return (binary_tree_leaves(tree->left)
			+ binary_tree_leaves(tree->right));
}


/**
 * binary_tree_is_perfect - function that checks if a binary tree is full.
 * @tree: pointer to the root node of the tree to check.
 *
 * Return: 0 if tree is NULL.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height = binary_tree_height(tree);
	int total_number_of_leaves = binary_tree_leaves(tree);

	if (tree == NULL)
		return (0);

	if (total_number_of_leaves == _pow(2, height))
		return (1);
	else
		return (0);
}
