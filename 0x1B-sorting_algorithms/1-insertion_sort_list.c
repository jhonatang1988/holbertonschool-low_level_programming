#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 *
 * @list: to sort
 *
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp = (*list)->next;

	while (1)
	{
		if (!temp || !temp->prev)
			break;
		if (temp->prev->n < temp->n)
		{
			temp = temp->next;
		}
		else
		{
			if (temp->next != NULL)
			{
				temp->next->prev = temp->prev;
			}
			temp->prev->next = temp->next;
			temp->next = temp->prev;
			temp->prev = temp->prev->prev;
			temp->next->prev = temp;
			if (temp->prev != NULL)
			{
				temp->prev->next = temp;
			}
			else
			{
				*list = temp;
				temp = temp->next;
			}
			print_list(*list);
		}
	}
}
