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

	return (leftHeight > rightHeight ? leftHeight + 1 : rightHeight + 1);
}


/**
 * binary_tree_balance - calcul the balance factor of a binary tree
 *
 * @tree: root
 *
 * Return: factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	int leftHeight = binary_tree_height(tree->left);
	int rightHeight = binary_tree_height(tree->right);

	return (leftHeight - rightHeight);
}
