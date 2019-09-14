#include "lists.h"
/**
 * add_dnodeint - creates a node at the begginning of a
 * dlistint_t list
 *
 * @head: head of the list
 * @n: data to fill with the node
 *
 * Return: pointer to the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp = NULL;

	if (head == NULL)
		return (NULL);

	temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		dprintf(2, "Error: can't malloc\n'");
		return (NULL);
	}

	new->n = n;
	*head = new;

	if (temp != NULL)
	{
		new->next = temp;
		temp->prev = new;
	}

	return (*head);
}
