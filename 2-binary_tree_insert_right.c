#include "binary_trees.h"

/**
 * binary_tree_insert_right - insertion to the right side of the node
 * @parent: a pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
        binary_tree_t *new_node;

        new_node = malloc(sizeof(binary_tree_t));

        if (new_node == NULL || parent == NULL)
        {
                return (NULL);
        }

        if (parent->right != NULL)
        {
                new_node->right = parent->right;
                new_node->right->parent = new_node;
        }

        new_node->n = value;
        new_node->parent = parent;
        new_node->left = NULL;
        parent->right = new_node;

        return (new_node);
}