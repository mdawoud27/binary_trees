#include "binary_trees.h"

/**
 * binary_tree_nodes - Function that counts the nodes
 * with at least 1 child in a binary tree.
 * @tree: Pointer to the root node of the tree to count the number of nodes.
 * Return: If tree is NULL, the function must return 0,
 * A NULL pointer is not a node.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_cnt = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		node_cnt++;

	node_cnt += binary_tree_nodes(tree->left);
	node_cnt += binary_tree_nodes(tree->right);

	return (node_cnt);
}
