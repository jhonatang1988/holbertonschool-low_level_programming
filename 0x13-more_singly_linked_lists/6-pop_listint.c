#include "lists.h"
/**
 * pop_listint - deletes the head of a node
 *
 * @head: address of the head address
 *
 * Return: head's node data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *first = NULL;
	int n;

	if (!head)
		return (-1);

	temp = *head;
	first = *head;

	n = first->n;

	first = first->next;

	free(temp);

	*head = first;

	return (n);
}
