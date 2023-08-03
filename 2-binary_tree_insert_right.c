#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the
 *					right-child of another node
 *
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Description: If right-child already exists, the new node
 *				must take its place, and the old right-child must
 *				be set as the right-child of the new node.
 *
 * Return: a pointer to the created node, or
 *			NULL on failure or
 *			if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *child_right;

	if (!parent)
		return (NULL);

	child_right = malloc(sizeof(binary_tree_t));
	if (!child_right)
		return (NULL);

	child_right->n = value;
	child_right->parent = parent;
	child_right->left = NULL;
	child_right->right = parent->right;
	parent->right = child_right;
	if (child_right->right)
		child_right->right->parent = child_right;
	return (child_right);
}
