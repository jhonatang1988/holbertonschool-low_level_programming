#include "lists.h"
/**
 * free_dlistint - free a dlistint-t
 *
 * @head: pointer to the head
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{

	dlistint_t *temp = NULL;

	temp = head;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
