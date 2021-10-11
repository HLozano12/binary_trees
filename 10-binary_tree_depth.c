#include "binary_trees.h"

/**
 * binary_tree_depth - measure depth of a node in tree
 * @tree: pointer to node to measure depth
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int new_Depth;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	new_Depth = (1 + binary_tree_depth(tree->parent));
		return (new_Depth);
}
