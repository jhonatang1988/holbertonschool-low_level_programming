#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node at the right side
 *
 * @parent: parent node
 * @value: data
 *
 * Return: pointer to the new node or NULL if failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tempNode = parent;
	binary_tree_t *newNode = NULL;
	binary_tree_t *secondLevel = NULL;

	if (!tempNode)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
		return (NULL);

	newNode->parent = tempNode;
	newNode->n = value;
	newNode->left = NULL;

	if (!tempNode->right)
	{
		tempNode->right = newNode;
		newNode->right = NULL;
	}
	else
	{
		secondLevel = tempNode->right;
		tempNode->right = newNode;
		newNode->right = secondLevel;
		secondLevel->parent = newNode;
	}
	return (newNode);
}
