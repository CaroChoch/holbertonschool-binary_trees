#include "binary_trees.h"

/**
 * binary_tree_size - get the size of the binary tree
 * @tree: header of the current value
 * Return: int.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}

/**
 * check_complete - function that checks if a binary tree is complete.
 * @tree: pointer to the root node of the tree to check.
 * Return: If tree is NULL, your function must return 1.
 */

int check_complete(const binary_tree_t *tree, int index, int number_nodes)
{
	if (tree == NULL)
		return (1);
	if (index >= number_nodes)
		return (0);
	return (check_complete(tree->left, 2 * index + 1, number_nodes) &&
			check_complete(tree->right, 2 * index + 2, number_nodes));
}


/**
 * binary_tree_is_complete - function that checks if a binary tree is complete.
 * @tree: pointer to the root node of the tree to check.
 * Return: If tree is NULL, your function must return 0.
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	int index = 0;
	int number_nodes = binary_tree_size(tree);

	if (tree == NULL)
		return (0);

	return (check_complete(tree, index, number_nodes));
}
