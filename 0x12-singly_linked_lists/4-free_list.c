#include "lists.h"
/**
 * free_list - frees a list
 *
 * @head: pointer of the head
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp = NULL;

	temp = head;

	while (temp)
	{
		free(temp->str);
		free(temp);
		temp = temp->next;
	}

	free(temp);
}
