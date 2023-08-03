#include "binary_trees.h"

/**
 * binary_tree_height_b - measure a binary tree's height
 * @tree: tree to measure the height of
 *
 * Return: height of the tree
 *         0 if tree is NULL
 */
size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t lt = 0;
	size_t rt = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			lt = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
			rt = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		}
		return ((lt > rt) ? lt : rt);
	}
}

/**
 * binary_tree_balance - returns a balance factor of a binary tree
 * @tree: tree
 * Return: balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, balance = 0;

	if (tree)
	{
		left = ((int)binary_tree_height_b(tree->left));
		right = ((int)binary_tree_height_b(tree->right));
		balance = left - right;
	}
	return (balance);
}
