#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *
 * @tree: pointer to the node
 *
 * Return: count of leaves or 0 otherwise
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	const binary_tree_t *tempNode = tree;
	size_t count = 0;

	if (!tempNode)
		return (count);

	if (!tempNode->left && !tempNode->right)
		count++;

	return (binary_tree_leaves(tempNode->left) +
		binary_tree_leaves(tempNode->right) + count);
}
