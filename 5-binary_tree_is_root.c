#include "binary_trees.h"

/**
 * binary_tree_is_root - check if given node is root
 * @node: pointer to the node to check
 *
 * Return: 1 if node is root, 0 if NULL or otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	
	if ((!(node->left)) && (!(node->right)))
		return (1);

	else
		return (0);
}
