#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor
 *
 * @tree: pointer to the node
 *
 * Return: balance factor or 0 otherwise
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	const binary_tree_t *tempNode = tree;
	int balanceFactor = 0;
	int parteLeft = 1;

	if (!tempNode)
		return (balanceFactor);
	while (1)
	{
		if (tempNode->left)
			parteLeft = 1;
		else
			parteLeft = 0;

		if (parteLeft)
		{
			if (tempNode->left)
			{
				tempNode = tempNode->left;
				balanceFactor++; }
			if (tempNode->right)
			{
				tempNode = tempNode->right;
				balanceFactor++; }
			else
			{
				parteLeft = 0; } }
		else
		{
			if (tempNode->left)
			{
				tempNode = tempNode->left;
				balanceFactor--; }
			if (tempNode->right)
			{
				tempNode = tempNode->right;
				balanceFactor--; }
			else
			{
				break; }}}
	return (balanceFactor); }
