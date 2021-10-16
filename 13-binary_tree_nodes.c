#include "binary_trees.h"

/**
 * binary_tree_nodes - count the nodes w/ at least 1 child in binary tree
 * @tree: is pointer to the root node of the tree to count the # of nodes
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		return (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right));

	else
		return (0);
}
