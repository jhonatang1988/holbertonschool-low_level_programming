#include "binary_trees.h"
/**
 * binary_tree_is_root - check if node is root
 *
 * node: pointer to the node
 *
 * Return: 1 if root, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	const binary_tree_t *tempNode = node;

	if(!tempNode)
		return 0;

	if(!tempNode->parent)
		return 1;

	return 0;
}
