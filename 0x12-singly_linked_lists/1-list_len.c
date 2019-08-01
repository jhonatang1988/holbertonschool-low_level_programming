#include "lists.h"
/**
 * list_len - returns number of elements of list
 *
 * @h: pointer in the head of list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
