#include "lists.h"
/**
 * print_listint_safe - prints a linked list in safe mode
 *
 * @head: pointer to the head
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp, *temp2, *temp3, *flag;
	int count = 0, len = 0;

	flag = NULL, temp = head, temp2 = head->next->next, temp3 = head;

	while (count != 2)
	{
		if (flag)
		{
			if (flag == temp3)
				count++;
			if (count == 2)
			{
				printf("-> ");
				len--;
			}
			printf("[%p] %d\n", (void *)temp3,  temp3->n);
			temp3 = temp3->next;
			len++;
			if (!temp3)
				return (len);
		}
		else
		{
			if (temp2->next == temp)
			{
				flag = temp2;
			}
			else
			{
				if (temp->next)
					temp = temp->next;
				else
					flag = temp;
				if (temp2->next->next)
					temp2 = temp2->next->next;
			}
		}
	}
	return (len);
}
