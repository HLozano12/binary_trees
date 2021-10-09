#include "binary_trees.h"

/**
 * binary_tree_height - Measure height of b tree
 * @tree: pointer to the root node of the tree
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int lefty, righty;

	if (tree == NULL)
		return (0);
	if (tree == NULL && tree->left == NULL)
		return (0);
	
	lefty = binary_tree_height(tree->left);
	righty = binary_tree_height(tree->right);

	if (lefty > righty)
		return (lefty + 1);
	else
		return (righty +1);
}
