#include "lists.h"
/**
 * add_nodeint_end - add a node at the end of the list
 *
 * @head: pointer to the address where is stored the head address
 * @n: number of elements
 *
 * Return: the address of the new element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL;
	listint_t *temp = NULL;

	temp = *head;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
	}
	else
	{
		while (temp)
		{
			if (!temp->next)
			{
				temp->next = new;
				break;
			}
			else
			{
				temp = temp->next;
			}
		}
	}

	return (*head);
}
