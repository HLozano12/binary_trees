#include "binary_trees.h"

/**
 * binary_tree_size - measure size of binary tree
 * @tree: pointer to the root node of tree to measure
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lft = 0;
	size_t rght = 0;
	size_t measure = 0;

	if (tree)
	{
		if (tree->left)
			lft = binary_tree_size(tree->left);
		if (tree->right)
			rght = binary_tree_size(tree->right);

		measure = (lft + rght) + 1;
		return (measure);
	}
	return (0);
}
