#include "binary_trees.h"

/**
 * binary_tree_preorder - print data by preorder
 *
 * @tree: pointer to the first node
 * @func: pointer to function print
 *
 * Return: Nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
