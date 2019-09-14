#include "lists.h"
/**
 * add_dnodeint_end - add a new node at the end of a
 * dlistint_t
 *
 * @head: double pointer to the head
 * @n: data integer
 *
 * Return: address of the new element or null if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = NULL;
	dlistint_t *new = NULL;

	if (!head)
		return (NULL);
	temp = *head;

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;

	if (!temp)
	{
		*head = new;
	}
	else
	{
		while (temp)
		{
			if (temp->next)
			{
				temp = temp->next;
			}
			else
			{
				temp->next = new;
				new->prev = temp;
				new->next = NULL;
				break;
			}
		}
	}
	return (new);
}
