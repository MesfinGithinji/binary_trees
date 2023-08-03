#include "binary_trees.h"

/**
 * binary_tree_delete - deletes the entire binary tree
 * @tree: pointer to the root node of the tree
 * Description: If tree is NULL, do nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}