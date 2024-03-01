#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Verifies if a node is a leaf of a binary tree
 * @node: A pointer to the node to be checked
 * Return: 0 if it is not a leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
