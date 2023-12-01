#include "binary_trees.h"

/**
 * binary_tree_balance - calcul the balance factor of a binary tree
 *
 * @tree: root
 *
 * Return: factor = lh - rh (+1 or -1)
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int factor = 0;

	if (tree == NULL)
		return (0);

	factor = binary_tree_balance(tree->left) - binary_tree_balance(tree->right);

	if (tree->right)
		factor = factor - 1;
	if (tree->left)
		factor = factor + 1;
	return (factor);
}
