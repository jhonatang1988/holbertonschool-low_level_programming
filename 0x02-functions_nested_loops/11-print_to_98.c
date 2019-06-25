#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_to_98 - reach to 98 from n
 * @n: number to start
 *
 * Return: nothing
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n > 98)
		{
			n--;
		} else
		{
			n++;
		}
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
