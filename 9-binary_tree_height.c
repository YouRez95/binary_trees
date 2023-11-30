#include "binary_trees.h"

/**
 * binary_tree_height - calcul the height of subtree
 *
 * @tree : root
 *
 * Return: Height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight, rightHeight;

	if (tree == NULL)
		return (0);

	leftHeight = binary_tree_height(tree->left);

	rightHeight = binary_tree_height(tree->right);

	if (tree->left == 0 && tree->right == 0)
		return (0);
	return (leftHeight > rightHeight ? leftHeight + 1 : rightHeight + 1);
}
