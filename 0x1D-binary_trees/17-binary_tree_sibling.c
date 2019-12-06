#include "binary_trees.h"
/**
 * binary_tree_sibling - search sibling in binary tree
 *
 * @node: pointer to the node
 *
 * Return: return pointer to the sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *right = node;

	if (!node || !node->parent ||
	    !node->parent->left || !node->parent->right)
		return (NULL);

	right = node->parent->right;

	return (node == right ? node->parent->left : right);
}
