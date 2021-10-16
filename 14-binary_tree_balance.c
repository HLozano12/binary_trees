#include "binary_trees.h"

/**
 * binary_tree_balance - measure the balance factor of a binary tree
 * @tree: pointer to the rood node of the tree to measure the balance factor
 *
 * Return: 0 if tree is NULL
 */

/* balance factor is Height of right subtree minus height of it's left
 * subtree and node w/ balance factor of 1, 0, or -1
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int lh, rh, bal;

	if (tree == NULL)
		return (0);
	
	lh = height_subtree(tree->left);
	rh = height_subtree(tree->right);
	bal = lh - rh;
	return (bal);
}

/**
 * height_subtree - find the balance of subtrees
 * @tree: the root of the tree
 *
 * Return: the height of the tree/root, -1 if tree is NULL
 */
int height_subtree(const binary_tree_t *tree)
{
	int lh, rh;

	if (tree == NULL)
		return (-1);

	lh = height_subtree(tree->left) + 1;
	rh = height_subtree(tree->right) + 1;

	if (lh > rh)
		return (lh);
	else
		return (rh);
}
