#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: 0 if tree is NULL.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size = binary_tree_size(tree->left);
	size_t right_size = binary_tree_size(tree->right);
	size_t size = (left_size + right_size) + 1;

	return (size);
}
