#include "binary_trees.h"
/**
 * binary_tree_insert_right - Insert on the right of the node
 * @parent: header of the current value
 * @value: int of the value in this header
 * Return: new_node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	parent->right = binary_tree_node(parent, value);
	return (parent->right);
}
