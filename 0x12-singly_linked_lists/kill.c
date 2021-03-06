#include "lists.h"
/**
 * add_node - add a node at the beggining of the list
 *
 * @head: pointer to the head
 * @str: pointer to the string member
 *
 * Return: the address to the new node or NULL otherwise
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = NULL;
	list_t *newFirst = NULL;
	int len = 0;

	temp = *head;
	while (str[len])
	{
		newFirst = (list_t *)malloc(sizeof(list_t));
		if (!newFirst)
			return (NULL);
		newFirst->str = strdup(str);

		newFirst->len = len;
		newFirst->next = temp;
		*head = newFirst;
		len++;
	}
	return (*head);
}
