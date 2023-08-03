#include "binary_trees.h"

/**
 * binary_tree_sibling - finds a node's sibling
 * @node: pointer to the node to find the sibling
 *
 * Return: NULL if node or parent are NULL or no sibling found
 *
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
