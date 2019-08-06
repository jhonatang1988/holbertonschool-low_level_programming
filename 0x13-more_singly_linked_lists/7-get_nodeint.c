#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a list
 *
 * @head: pointer to the head
 * @index: index of the node, starting at 0
 *
 * Return: the nth node of the list (the pointer)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = NULL;

	temp = head;

	while (i < index && !temp)
	{
		temp = temp->next;
		i++;
	}

	if (temp)
		return (temp);
	else
		return (NULL);
}
