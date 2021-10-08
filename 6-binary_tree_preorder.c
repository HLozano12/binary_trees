#include "binary_trees.h"

/**
 * binary_tree_preorder - go through tree using pre-order Traversal
 * @tree: pointer to the root node of tree to traverse
 * @func: pointer to a func that calls each node
 *
 * Return: void if tree or func is NULL
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	if (func == NULL)
		return;
	
	(*func)(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
