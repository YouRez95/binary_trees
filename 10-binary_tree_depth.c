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

	const binary_tree_t *temp;
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	temp = tree;
	while (temp->parent != NULL)
	{
		temp = temp->parent;
		depth++;
	}

	return (depth);
}
