#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a node in binary tree
 *
 * @tree: pointer to the root
 *
 * Return: returns the height or 0 in errors
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	const binary_tree_t *tempNode = tree;
	size_t height = 0;

	if(!tempNode)
		return height;

	while(1)
	{
		if(tempNode->left)
		{
			tempNode = tempNode->left;
			height++;
		}
		if(tempNode->right)
		{
			tempNode = tempNode->right;
			height++;
		}
		else
		{
			break;
		}
	}

	return height;
}
