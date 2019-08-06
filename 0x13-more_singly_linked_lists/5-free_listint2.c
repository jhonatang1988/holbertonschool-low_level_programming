#include "lists.h"
/**
 * free_listint2 - frees a list
 *
 * @head: address where the head address is stored
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *temp2 = NULL;

	if (!head)
		return;

	temp = *head;

	while (temp)
	{
		temp2 = temp->next;
		free(temp);
		temp = temp2;
	}

	*head = NULL;
}
