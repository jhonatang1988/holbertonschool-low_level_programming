#include "binary_trees.h"
/**
 * binary_tree_preorder - preorder traversal binary tree
 *
 * @tree: pointer to the root
 * @func: call back function to each node
 *
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *tempNode = tree;

	if (!tempNode || !func)
		return;

	func(tempNode->n);

	binary_tree_preorder(tempNode->left, func);

	binary_tree_preorder(tempNode->right, func);
}
