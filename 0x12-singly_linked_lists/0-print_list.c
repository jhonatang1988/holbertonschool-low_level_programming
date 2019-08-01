#include "lists.h"
/**
 * print_list - prints all elements of list_t list
 *
 * @h: pointer of the head of the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int len = 0;

	while (h)
	{
		printf("[%d] %s\n", h->len, h->str ? h->str : "(nil)");
		len++;
		h = h->next;
	}

	return (len);
}
