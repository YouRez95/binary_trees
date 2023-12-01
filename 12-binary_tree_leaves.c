#include "binary_trees.h"


/**
 * binary_tree_leaves - calcul the nomber of leaves
 *
 * @tree: root
 *
 * Return: nbr of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);

	leaves = leaves + binary_tree_leaves(tree->left);
	leaves = leaves + binary_tree_leaves(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (leaves);
}
