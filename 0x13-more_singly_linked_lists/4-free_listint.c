#include "lists.h"
/**
 * free_listint - frees a list
 *
 * @head: pointer to the head
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp = NULL;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
