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

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: 0 if the tree is null
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	if (tree->left && tree->right)
	{
		left = binary_tree_height(tree->left);
		right = binary_tree_height(tree->right);

		if (left == right)
		{
			return (binary_tree_is_perfect(tree->left)
					&& binary_tree_is_perfect(tree->right));
		}
	}

	return (0);
}
