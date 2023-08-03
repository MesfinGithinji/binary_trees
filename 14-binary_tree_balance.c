#include "binary_trees.h"

/**
 * binary_tree_height_new - measure a binary tree's height
 * @tree: tree to measure the height of
 *
 * Return: height of the tree
 *         0 if tree is NULL
 */
size_t binary_tree_height_new(const binary_tree_t *tree)
{
	size_t left_side = 0;
	size_t rightside = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			left_side = tree->left ? 1 + binary_tree_height_new(tree->left) : 1;
			right_side = tree->right ? 1 + binary_tree_height_new(tree->right) : 1;
		}
		return ((left_side > right_side) ? left_side : right_side);
	}
}

/**
 * binary_tree_balance - returns a balance factor of a binary tree
 * @tree: tree
 * Return: balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right_side = 0, left_side = 0, balance = 0;

	if (tree)
	{
		left_side = ((int)binary_tree_height_new(tree->left));
		right_side = ((int)binary_tree_height_new(tree->right));
		balance = left_side - right_side;
	}
	return (balance);
}
