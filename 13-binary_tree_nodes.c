#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with at
 *			least 1 child in a binary tree
 * @tree: pointer to the root node of the
 *		tree to count the number of nodes
 * Return: 0 if the tree is NULL
 * otherwise return at least 1 child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	return (tree->left || tree->right ? binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1 : 0);
}
