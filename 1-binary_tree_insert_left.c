#include "binary_trees.h"

/**
 * binary_tree_insert_left - insertion to the left side of the node
 * @parent: a pointer to the node to insert the left-child in.
 * @value: the value to store in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node;

	left_node = binary_tree_node(parent, value);

	if (parent == NULL)
	{
		return (NULL);
	}

	if (parent->left != NULL)
	{
		left_node->left = parent->left;
		left_node->left->parent = left_node;
	}

	left_node->n = value;
	parent->left = left_node;

	return (left_node);
}
