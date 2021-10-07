#include "binary_trees.h"
/**
 * binary_tree_node - Create a binary tree node
 * @parent: A pointer to the parent node of new node
 * @value: The value to put in the new node
 *
 * Return: Pointer of new node or NUll on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	new = malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->left = new->right = NULL;
	return (new);
}
