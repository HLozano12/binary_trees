#include "binary_trees.h"

/**
 * binary_tree_sibling - find the sibling of a node
 * @node: a pointer to the node to find sibling
 *
 * Return: NULL if node is NULL or Parent is node, or node has no sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	// If node NULL or Parent Is NULL
	if( node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->right == NULL)
		return (NULL);
	else if (node->parent->left->n == node->n)
		return (node->parent->right);
	else
		return (node->parent->left);
}
