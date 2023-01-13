#include "binary_trees.h"

/**
 * bst_insert - function that inserts a value in a Binary Search Tree.
 * @tree: double pointer to the root node of the BST to insert the value.
 * @value: value to store in the node to be inserted.
 * Return: pointer to the created node, or NULL on failure.
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *tmp = NULL;

	if (*tree == NULL)
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}

	tmp = (*tree);

	while (tmp != NULL)
	{
		if (tmp->n == value)
			return (NULL);

		if (tmp->n < value)
		{
			if (tmp->right == NULL)
			{
				tmp->right = binary_tree_node(tmp, value);
				return (tmp->right);
			}
			tmp = tmp->right;
		}
		if (tmp->n > value)
		{
			if (tmp->left == NULL)
			{
				tmp->left = binary_tree_node(tmp, value);
				return (tmp->left);
			}
			tmp = tmp->left;
		}
	}
	return (NULL);
}
