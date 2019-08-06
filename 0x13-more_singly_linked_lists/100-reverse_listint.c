#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 *
 * @head: address where is the head address stored
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nxt = NULL;
	listint_t *prv = NULL;

	while (*head)
	{
		nxt = (*head)->next;
		(*head)->next = prv;
		prv = (*head);
		*head = nxt;
	}

	*head = prv;

	return (*head);
}
