#include "binary_trees.h"
/**
 * binary_tree_insert_right - Insert node as the right child
 * @parent: pointer to the node to insert to the right
 * @value: value to store in the new node
 *
 * Return: Pointer of created node, NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nuevo = NULL;

	if (!parent)
		return(NULL);

	nuevo = binary_tree_node(parent, value);

	if (!nuevo)
		return (NULL);

	nuevo->right = parent->right;

	if (nuevo->right)
		nuevo->right->parent = nuevo;

	parent->right = nuevo;

	return (nuevo);
}
