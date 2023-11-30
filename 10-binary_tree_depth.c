#include "binary_trees.h"

/**
 * binary_tree_depth - calcul the height of subtree
 *
 * @tree : root
 *
 * Return: Height
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t leftHeight, rightHeight;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL && tree->right != NULL)
		return (1);	

	leftHeight = binary_tree_depth(tree->left);

	rightHeight = binary_tree_depth(tree->right);

	return (leftHeight + rightHeight);

}
