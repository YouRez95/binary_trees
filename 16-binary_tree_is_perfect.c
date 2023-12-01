#include "binary_trees.h"

/**
 * binary_tree_is_perfect - perfect
 * @tree: root
 *
 * Return: 0 or 1
 */


int binary_tree_is_perfect(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (binary_tree_is_perfect(tree->left)
		&& binary_tree_is_perfect(tree->right));
}
