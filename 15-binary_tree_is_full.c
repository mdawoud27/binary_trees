#include "13-binary_tree_nodes.c"

/**
 * binary_tree_is_full - Function that checks if a binary tree is full.
 * @tree: Pointer to the root node of the tree to check.
 * Return: If tree is NULL, your function must return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_nodes = 0, right_nodes = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left)
		left_nodes = binary_tree_is_full(tree->left);

	if (tree->right)
		right_nodes = binary_tree_is_full(tree->right);
	/*printf("%d\t%d\n", left_nodes, right_nodes);*/

	return (left_nodes && right_nodes);
}
