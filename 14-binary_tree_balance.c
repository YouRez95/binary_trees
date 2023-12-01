#include "binary_trees.h"


/**
 * binary_tree_h - calcul the height of a binary tree
 *
 * @tree: root
 *
 * Return: height
 */



int binary_tree_h(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int leftHeight = binary_tree_h(tree->left);
	int rightHeight = binary_tree_h(tree->right);

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

	int leftHeight = binary_tree_h(tree->left);
	int rightHeight = binary_tree_h(tree->right);

	return (leftHeight - rightHeight);
}
