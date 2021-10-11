#include "binary_trees.h"

/**
 * binary_tree_height - Measure height of b tree
 * @tree: pointer to the root node of the tree
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int lefty = 0, righty = 0;

	if (tree)
	{
		if (tree->left)
			lefty = 1 + binary_tree_height(tree->left);
		if (tree->right)
			righty = 1 + binary_tree_height(tree->right);
		if (lefty >= righty && lefty != 0)
			return (lefty);
		else if (righty > lefty && righty != 0)
			return (righty);
	}
	return (0);
}
