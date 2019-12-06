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
	int countRight = 0;
	int countLeft = 0;

	if (!tempNode)
		return (0);
	if (!tempNode->left && !tempNode->right)
		return (1);
	if (tempNode->left && tempNode->right)
	{
		countLeft = binary_tree_is_full(tempNode->left);
		countRight = binary_tree_is_full(tempNode->right);
		if (countLeft == 0 || countRight == 0)
			return (0);
		return (1);
	}
	else
	{
		return (0);
	}
}
