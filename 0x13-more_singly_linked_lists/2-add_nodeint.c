#include "lists.h"
/**
 * add_nodeint - add a new list at the begginning of a list
 *
 * @head: pointer to the address where the head address is stored
 * @n: number of elements
 *
 * Return: address of the new element of NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;
	listint_t *temp = NULL;

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
		temp = *head;

		*head = new;
		new->next = temp;
	}

	return (*head);
}
