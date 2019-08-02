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

	while (head)
	{

		temp = head->next;

		free(head->str);
		free(head);
		head = temp;
	}
}
