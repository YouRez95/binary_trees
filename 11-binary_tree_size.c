#include "binary_trees.h"

/**
 * binary_tree_size - calcul the size of subtree
 *
 * @tree: root
 *
 * Return: Size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	size = 1 + binary_tree_size(tree->left);
	size = size + binary_tree_size(tree->right);

	return (size);

}
