#include "lists.h"
/**
 * sum_listint - sum all the data of a list
 *
 * @head: pointer to the head
 *
 * Return: sum of all data or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
