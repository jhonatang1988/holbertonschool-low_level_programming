#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 *
 * @head: address where is stored the head address
 * @index: index of the node to delete
 *
 * Return: 1 if succeeded of -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = NULL;
	listint_t *temp2 = NULL;
	unsigned int i = 0;

	temp = *head;
	if (!temp)
		return (-1);

	if (!index)
	{
		temp2 = temp->next;
		free(temp);
		*head = temp2;
	}
	else
	{
		while (i < index - 1)
		{
			temp = temp->next;
			if (!temp)
				return (-1);
			i++;
		}

		temp2 = temp->next->next;

		free(temp->next);

		temp->next = temp2;
	}
	return (1);
}
