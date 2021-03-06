#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals in a 2d matrix
 * @a: 2d matrix
 * @size: size of 2d matrix
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0;
	int sum2 = 0;

	for (i = 0; i < (size * size);)
	{
		sum = sum + a[i];
		i = i + size + 1;
	}
	printf("%d, ", sum);

	for (i = size - 1; i < (size * size) - 1;)
	{
		sum2 = sum2 + a[i];
		i = i + size - 1;
	}
	printf("%d\n", sum2);
}
