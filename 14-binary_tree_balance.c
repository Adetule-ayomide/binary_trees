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
		left_height = (binary_tree_height(tree->left) + 1);
		right_height = (binary_tree_height(tree->right) + 1);
	}
	return (left_height > right_height ? left_height : right_height);
}


/**
 * binary_tree_balance - a function that measures the balance
 *			factor of a binary tree
 * binary_tree_height - function that calc the height
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
