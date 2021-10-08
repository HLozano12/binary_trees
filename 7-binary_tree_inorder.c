#include "binary_trees.h"

/**
 * binary_tree_inorder - go through b tree using in-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a func to call each node
 *
 * Return: Do nothing if tree and func is NULL
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
