#include "binary_trees.h"

/**
 * binary_tree_is_perfect - check if binary tree is perfect
 * @tree: pointer to the root node of three to check
 *
 * Return: 0 if tree is NULL
 */

// empty tree or same level of leaves and all internal nodes have children
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int lh, rh, height, size;

	if (!tree)
		return (0);
	
	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);
	height = lh + rh;
	size = binary_tree_size(tree);

	if ((size == (1 << height)) && (lh == rh))
		return (1);
	
	else
		return (0);
}

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

/**
 * binary_tree_height - Measure height of binary tree
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
