#include "binary_trees.h"
/**
 * binary_tree_uncle - finds uncle of node in binary tree
 *
 * @node: pointer to the node
 *
 * Return: pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *right = node;

	if (!node || !node->parent ||
	    !node->parent->parent ||
	    !node->parent->parent->left ||
	    !node->parent->parent->right)
		return (NULL);

	right = node->parent->parent->right;

	return (node->parent == right ?
		node->parent->parent->left : right);
}
