#include "binary_trees.h"
/**
 * binary_tree_postorder - postorder traversal of binary tree
 *
 * @tree: pointer to the root
 * @func: call back with the node data
 *
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *tempNode = tree;

	if (!tempNode || !func)
		return;

	binary_tree_postorder(tempNode->left, func);
	binary_tree_postorder(tempNode->right, func);
	func(tempNode->n);
	tempNode = tree;

}
