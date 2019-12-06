#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 *
 * @tree: pointer to the root
 *
 * Return: 1 if perfect, 0 otherwise
 */
int tree_full(const binary_tree_t *tree);
int tree_height(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	const binary_tree_t *tempNode = tree;
	int heightL = 0, heightR = 0, full = 0;

	heightL = tree_height(tempNode->left);
	heightR = tree_height(tempNode->right);

	if (heightL == heightR)
	{
		full = tree_full(tempNode);
		return (full);
	}
	else
	{
		return (0);
	}
}
/**
 * tree_height - height of tree
 *
 * @tree: pointer to the node
 *
 * Return: height or 0 otherwise
 */
int tree_height(const binary_tree_t *tree)
{
	const binary_tree_t *tempNode = tree;
	int l = 0, r = 0;

	if (!tempNode)
		return (0);

	l = tempNode->left ? tree_height(tempNode->left) + 1 : 0;
	r = tempNode->right ? tree_height(tempNode->right) + 1 : 0;

	return (l > r ? l : r);
}
/**
 * tree_full - checks if tree is full
 *
 * @tree: pointer to the node
 *
 * Return: 1 if full, 0 otherwise
 */
int tree_full(const binary_tree_t *tree)
{
	const binary_tree_t *tempNode = tree;
	int countRight = 0;
	int countLeft = 0;

	if (!tempNode)
		return (0);
	if (!tempNode->left && !tempNode->right)
		return (1);
	if (tempNode->left && tempNode->right)
	{
		countLeft = tree_full(tempNode->left);
		countRight = tree_full(tempNode->right);
		if (countLeft == 0 || countRight == 0)
			return (0);
		return (1);
	}
	else
	{
		return (0);
	}
}
