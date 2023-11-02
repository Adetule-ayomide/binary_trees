#include "binary_trees.h"

/**
 * binary_tree_is_tree - function that checks if a binary tree is perfect
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
			return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
		}
	}

	return (0);
}
