#include "binary_trees.h"

/**
 * binary_tree_balance - Calculates the balance factor of a binary tree
 * @tree: A pointer to the root node of the
 * tree whose balance factor is measured
 * Return: 0 if null
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - Calculates height of a binary tree
 * @tree: A pointer to the root node of the tree whose height is measured
 * Return: 0 if NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t m = 0, n = 0;

		m = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		n = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((m > n) ? m : n);
	}
	return (0);
}
