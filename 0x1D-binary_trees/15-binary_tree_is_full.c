#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if binary tree is full
 *
 * @tree: pointer to the node
 *
 * Return: 1 if full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	const binary_tree_t *tempNode = tree;
	int count = 0;

	if (!tempNode)
		return (0);

	count = (binary_tree_is_full(tempNode->left) +
	       binary_tree_is_full(tempNode->right) + count);

	return (count);

}
