#include "lists.h"
/**
 * get_dnodeint_at_index - returns the address of a node in a nth
 * position
 *
 * @head: pointer to the head
 * @index: position to be retrieven in the list
 *
 * Return: the pointer to the nth node of the list, NULL if node
 * does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
	{
		return (NULL);
	}

	while (i < index)
	{
		if (!head)
			return (NULL);
		head = head->next;
		i++;
	}

	if (i == index)
	{
		if (head)
			return (head);
	}

	return (NULL);
}
