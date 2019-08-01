#include "lists.h"
/**
 * add_node_end - adds a new node at the end
 *
 * @head: pointer of the head
 * @str: pointer of the string
 *
 * Return: the address of the new element or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *newNode = NULL;
	list_t *temp = NULL;

	newNode = (list_t *)malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	temp = *head;

	newNode->str = strdup(str);

	while (str[len] != '\0')
		len++;

	newNode->len = len;
	newNode->next = NULL;

	if (!*head)
	{
		*head = newNode;
	}
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}

		temp->next = newNode;
	}

	return (newNode);
}
