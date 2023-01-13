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
 * CurrentLevel - function that gives the current level of the binary tree.
 * @tree: pointer to the root node of the tree to traverse.
 * @level: level of the node in the tree.
 * @func: pointer to a function to call for each node. The value in the node
 * must be passed as a parameter to this function.
*/
void CurrentLevel(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		if (level == 1)
			func(tree->n);
		if (level > 1)
		{
			CurrentLevel(tree->left, level - 1, func);
			CurrentLevel(tree->right, level - 1, func);
		}
	}
}


/**
 * binary_tree_levelorder - function that goes through a binary tree using
 * level-order traversal.
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node. The value in the node
 * must be passed as a parameter to this function.
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int h = binary_tree_height(tree);
	int i;

	for (i = 1; i <= h; i++)
	{
		CurrentLevel(tree, i, func);
		h++;
	}
}
