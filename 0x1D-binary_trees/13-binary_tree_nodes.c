#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least one child
 *
 * @tree: pointer to the node
 *
 * Return: count or 0 otherwise
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	const binary_tree_t *tempNode = tree;
	size_t count = 0;

	if (!tempNode)
		return (count);

	if (tempNode->left || tempNode->right)
		count++;

	return (binary_tree_nodes(tempNode->left) +
	       binary_tree_nodes(tempNode->right) + count);
}
