#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: address at which is stored the head address
 * @idx: index of the list where the new node should be added
 * @n: n data to fill the node
 *
 * Return: the address of the new node, NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = NULL;
	listint_t *temp2 = NULL;
	listint_t *new = NULL;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;

	temp = *head;
	if (!temp)
		return (NULL);

	if (!idx)
	{
		*head = new;
		new->next = temp;
		return (*head);
	}

	while (i < idx - 1 && !temp)
	{
		if (!temp)
			return (NULL);
		temp = temp->next;
		if (!temp)
			return (NULL);
		i++;
	}

	temp2 = temp->next;

	temp->next = new;
	new->next = temp2;

	return (new);
}
