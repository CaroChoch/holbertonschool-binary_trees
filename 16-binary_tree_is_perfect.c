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
 * binary_tree_nodes -  function that counts the nodes with at least 1 child
 * in a binary tree.
 * @tree: pointer to the root node of the tree to count the number of nodes.
 * Return: number of nodes with at least one child, and 0 if the tree is NULL.
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	return (binary_tree_nodes(tree->left)
		+ binary_tree_nodes(tree->right) + 1);
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
	if (y == 0)
		return (1);

	return (_pow(x, y - 1) * x);
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is full.
 * @tree: pointer to the root node of the tree to check.
 *
 * Return: 0 if tree is NULL.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h = binary_tree_height(tree) - 1;
	int total_number_of_nodes = binary_tree_nodes(tree);

	if (tree == NULL)
			return (0);

	return (_pow(2, h + 1) - 1 == total_number_of_nodes);
}
