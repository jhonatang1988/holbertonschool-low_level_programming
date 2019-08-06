#include "lists.h"
/**
 * listint_len - print the number of elements in a linked list
 *
 * @h: pointer to the head
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	if (!h)
		return (-1);

	int len;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
