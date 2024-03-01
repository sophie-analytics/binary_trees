#include "binary_trees.h"

/**
 * binary_tree_height - Calculates the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 * Return: 0 if null 
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t m = 0, n = 0;

		m = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		n = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((m > n) ? m : n);
	}
	return (0);
}
