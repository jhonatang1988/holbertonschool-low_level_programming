#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of binary tree
 *
 * @tree: pointer to the node
 *
 * Return: the size or 0 in errors
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	const binary_tree_t *tempNode = tree;

	if (!tempNode)
	{
		return (0);
	}
	else
	{
		return (binary_tree_size(tempNode->left) + 1 +
		       binary_tree_size(tempNode->right));
	}
}
