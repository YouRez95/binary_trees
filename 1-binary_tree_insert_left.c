#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node to the left of parent
 *
 * @parent: pointer to the parent node
 * @value: data inserted to node
 *
 * Return: pointer to the node created
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *root;

	if (parent == NULL)
		return (NULL);

	root = binary_tree_node(parent, value);
	if (parent->left == NULL)
		parent->left = root;
	else
	{
		root->left = parent->left;
		parent->left->parent = root;
		parent->left = root;
	}
	return (root);
}
