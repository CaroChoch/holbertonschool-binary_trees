#include "binary_trees.h"
/**
 * binary_tree_insert_left - Insert on the left of the node
 * @parent: header of the current value
 * @value: int of the value in this header
 * Return: new_node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	parent->left = binary_tree_node(parent, value);
	return (parent->left);
}
