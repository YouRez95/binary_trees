#include "binary_trees.h"

/**
 * binary_tree_is_full - check if tree is full
 *
 * @tree: root
 *
 * Return: 1 if full else 0
 */



int binary_tree_is_full(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (binary_tree_is_full(tree->left) == 1
		&& binary_tree_is_full(tree->right) == 1)
		return (1);

	return (0);
}
