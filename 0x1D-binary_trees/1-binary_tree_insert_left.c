#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left child
 *
 * @parent: parent node
 * @value: data
 *
 * Return: pointer to the new node or NULL if failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	newNode->right = NULL;

	if (!tempNode->left)
	{
		tempNode->left = newNode;
		newNode->left = NULL;
	}
	else
	{
		secondLevel = tempNode->left;
		tempNode->left = newNode;
		newNode->left = secondLevel;
		secondLevel->parent = newNode;
	}
	return (newNode);
}
