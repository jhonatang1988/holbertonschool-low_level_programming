#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: double pointer to the head
 * @idx: index where new node will be added
 * @n: data to fill in the node
 *
 * Return: the address of the new node, NULL if failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prev = NULL;
	dlistint_t *next = NULL;
	dlistint_t *new = NULL;
	dlistint_t *temp = NULL;
	unsigned int i = 0;

	if (!h)
		return (NULL);
	if (!*h && idx)
		return (NULL);
	temp = *h;
	prev = *h;
	next = *h;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	if (!*h && !idx)
	{
		*h = new;
		new->n = n;
		return (*h); }
	while (i < idx)
	{
		temp = temp->next;
		if (!temp && i < idx - 1)
		{
			free(new);
			return (NULL);
		}
		i++; }
	if (i == idx && idx)
	{
		temp = temp->prev, next = temp->next, prev = temp, new->n = n;
		new->prev = prev, new->next = next, temp->next = new;
		return (new); }
	if (i == idx && !idx)
	{
		next = temp, new->n = n, *h = new, new->next = next;
		new->prev = NULL, next->prev = new;
		return (new); }
	return (NULL); }
