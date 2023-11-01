#include "binary_trees.h"

/**
 * binary_tree_height - measure the height of a binary tree
 * @tree: a pointer to the root node of the tree
 *
 * Return: If tree is NULL, return 0.
 * Otherwise, return the height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree)
	{
		left_height = (tree->left ? binary_tree_height(tree->left) + 1 : 0);
		right_height = (tree->right ? binary_tree_height(tree->right) + 1 : 0);
	}
	return (left_height > right_height ? left_height : right_height);
}
