#include "binary_trees.h"

/**
 * binary_tree_is_full - check if binary tree is full
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: 0 if tree is NULL, 1 if all nodes have children
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left == NULL || tree->right == NULL)
	return (0);

	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
