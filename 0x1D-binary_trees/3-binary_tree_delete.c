#include "binary_trees.h"
/**
 * binary_tree_delete - deletes a binary tree
 *
 * @tree: root
 *
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *tempNode = tree;
	binary_tree_t *cabeza = tree;
	binary_tree_t *parent = NULL;
	int tieneLeft = 0;
	int tieneRight = 0;

	if (!tempNode)
		return;
	while (1)
	{
		if (tempNode->left)
		{
			tempNode = tempNode->left;
			tieneLeft = 1; }
		else
		{
			tieneLeft = 0; }
		if (tempNode->right)
		{
			tempNode = tempNode->right;
			tieneRight = 1; }
		else
		{
			tieneRight = 0; }
		if (tieneLeft == 0 && tieneRight == 0)
		{
			parent = tempNode->parent;
			if (parent && parent->right == tempNode)
				parent->right = NULL;
			else if (parent)
				parent->left = NULL;
			free(tempNode);
			tempNode = parent;
		}
		binary_tree_print(cabeza);
		if (!tempNode)
		{
			free(tempNode);
			return;
		}}}
