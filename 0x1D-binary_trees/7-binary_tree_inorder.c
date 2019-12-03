#include "binary_trees.h"
/**
 * binary_tree_inorder - inorder traversal of binary tree
 *
 * @tree: pointer to root
 * @func: call back to print number
 *
 * Return: nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *tempNode = tree;

	if(!tempNode || !func)
		return;

	binary_tree_inorder(tempNode->left, func);
	func(tempNode->n);

	tempNode = tree;

	binary_tree_inorder(tempNode->right, func);
}
