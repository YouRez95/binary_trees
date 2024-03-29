#include "binary_trees.h"

/**
 * binary_tree_node - create new node
 *
 * @parent: pointer to the parent node
 * @value: data inserted to node
 *
 * Return: pointer to the node created
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	if (parent == NULL)
		node->parent = NULL;
	else
		node->parent = parent;
	return (node);
}
