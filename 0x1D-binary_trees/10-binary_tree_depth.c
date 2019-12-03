#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of node in binary tree
 *
 * @tree: pointer to the node
 *
 * Return: the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *tempNode = tree;
	size_t depth = 0;

	if(!tempNode)
		return depth;

	while(1)
	{
		if(tempNode->parent)
		{
			tempNode = tempNode->parent;
			depth++;
		}
		else
		{
			break;
		}
	}

	return depth;
}
