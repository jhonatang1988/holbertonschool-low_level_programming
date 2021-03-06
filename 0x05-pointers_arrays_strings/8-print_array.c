#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array
 * @a: pointer to an array
 * @n: number of elements of a to print
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int increment = 0;

	while (increment < n)
	{
		printf("%d", *(a + increment));
		if (increment != n - 1)
			printf(", ");
		increment++;
	}
	printf("\n");
}
