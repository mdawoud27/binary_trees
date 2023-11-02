#include "binary_trees.h"

/**
 * binary_tree_uncle - Function that finds the uncle of a node.
 * @node: Pointer to the node to find the uncle.
 * Return: If node is NULL, return NULL
 * f node has no uncle, return NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left && node->parent->parent->right)
	{
		if (node->parent == node->parent->parent->left)
			return (node->parent->parent->right);
		else
			return (node->parent->parent->left);
	}
	return (NULL);
}
