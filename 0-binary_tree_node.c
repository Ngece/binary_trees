#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: Is a pointer to parent node
 * @value: The valeu stored in the node
 * Return: Pointer to the new node or NULL in a case of failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (0);

	new_node->parent = parent;
	new_node->n = value;
	new_node->right = NULL;
	new_node->left = NULL;
	return (new_node);
}
