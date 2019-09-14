#include "lists.h"
/**
 * sum_dlistint - sum all the data in a dlistint_t list
 *
 * @head: pointer to the head
 *
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);

	while (head)
	{
		if (head->n)
			sum += head->n;
		head = head->next;
	}

	return (sum);
}
