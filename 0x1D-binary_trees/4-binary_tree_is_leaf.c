#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a node is a leaf
 *
 * @node: pointer to node
 *
 * Return: 1 if leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	const binary_tree_t *tempNode = node;

	if(!tempNode)
		return 0;

	if(!tempNode->left && !tempNode->right)
	{
		return 1;
	}

	return 0;
}
