#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as a right child
 * @parent: pointer to the node to insert
 * @value: value to store in the new node
 * Return: pointer to the created node or null in a case of failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;

	if (parent->right != NULL)
		(parent->right)->parent = new_node;
	{
		new_node->right = parent->right;
		parent->right = new_node;
	}
	return (new_node);
}
