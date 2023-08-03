#include "binary_trees.h"

/**
 * binary_tree_insert_left -  inserts a node as the left-child
 *
 * @parent: pointer to the node to insert the left-child in
 * @value:  value to store in the new node
 *
 * Description - If left-child already exists, the new node must
 *				take its place, and the old left-child must be set as
 *				the left-child of the new node.
 *
 * Return: pointer to the created node, or NULL on failure or if
 *			parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *child_left;

	if (!parent)
		return (NULL);

	child_left = malloc(sizeof(binary_tree_t));
	if (!child_left)
		return (NULL);

	child_left->n = value;
	child_left->parent = parent;
	child_left->right = NULL;
	child_left->left = parent->left;
	parent->left = child_left;
	if (child_left->left)
		child_left->left->parent = child_left;
	return (child_left);
}
