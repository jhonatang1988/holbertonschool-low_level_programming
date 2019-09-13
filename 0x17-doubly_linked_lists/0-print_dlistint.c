#include "lists.h"
/**
 * print_dlistint - print all the elements of a dlistint_t list
 *
 * @h: head to the pointer
 *
 * Return: the number of elements in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
