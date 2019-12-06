#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a node in binary tree
 *
 * @tree: pointer to the root
 *
 * Return: returns the height or 0 in errors
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	const binary_tree_t *tempNode = tree;
	int l = 0, r = 0;

	if (!tempNode)
		return (0);

	l = tempNode->left ? binary_tree_height(tempNode->left) + 1 : 0;
	r = tempNode->right ? binary_tree_height(tempNode->right) + 1 : 0;

	return (l > r ? l : r);
}
