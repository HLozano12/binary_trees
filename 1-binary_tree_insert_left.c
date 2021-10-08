#include "binary_trees.h"
/**
 * binary_tree_insert_left
 * @parent: pointer to the node to insert the left child
 * @value: is the value to store in the new mode
 *
 * Return: Pointer or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nuevo = NULL;

	if (parent == NULL)
		return (NULL);

	nuevo = malloc(sizeof(binary_tree_t));
	if (nuevo == NULL)
		return (NULL);

	nuevo->left = NULL;
	nuevo->right = NULL;

	if (parent->left)
	{
		nuevo->n = parent->left->n;
		parent->left->n = value;
		parent->left->left = nuevo;
		nuevo->parent = parent->left;
	}
	else
	{
		parent->left = nuevo;
		nuevo->parent = parent;
		nuevo->n = value;
	}
	return (nuevo);
}
