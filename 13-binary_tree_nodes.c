#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 * @tree: root
 *
 * Return: nbr of nodes
 */


size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);
	nodes = binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left);

	if (tree->left != NULL || tree->right != NULL)
		return (1 + nodes);

	return (nodes);
}
