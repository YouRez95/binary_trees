#include "binary_trees.h"

/**
 * binary_tree_insert_right - insertnode to right
 *
 * @parent: pointer to parent
 * @value: value inserted to node
 *
 * Return: pointer to node created
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *root;

	if (parent == NULL)
		return (NULL);

	root = binary_tree_node(parent, value);
	if (parent->right == NULL)
		parent->right = root;
	else
	{
		root->right = parent->right;
		parent->right->parent = root;
		parent->right = root;
	}

	return (root);

}
