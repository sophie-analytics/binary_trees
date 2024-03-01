#include "binary_trees.h"

/**
 * binary_tree_is_root - Verifies if a node is a root
 * @node: A pointer to the node to check.
 * Return: 0 is it is not a root and 1 if it is 
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
