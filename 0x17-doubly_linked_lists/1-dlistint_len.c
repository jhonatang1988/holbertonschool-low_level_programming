#include "lists.h"
/**
 * dlistint_len - returns the number of element of a
 * dlistint_t list
 *
 * @h: pointer to the head
 *
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
