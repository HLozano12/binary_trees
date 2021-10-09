#include "binary_trees.h"

/**
 * binary_tree_postorder - Using post-order Traversal
 * @tree: pointer to the rood node to traverse
 * @func: pointer to a func to call each node
 *
 * Return: void if tree/func is NULL
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}