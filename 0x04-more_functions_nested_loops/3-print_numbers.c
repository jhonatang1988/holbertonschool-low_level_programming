#include "holberton.h"

/**
 * print_numbers - multiplies to integers
 *
 * Return: void
 */
void  print_numbers(void)
{
	int count = 48;

	while (count <= 57)
	{
		_putchar(count);
		count++;
	}
	_putchar('\n');
}
