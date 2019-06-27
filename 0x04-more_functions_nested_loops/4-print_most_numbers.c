#include "holberton.h"

/**
 * print_most_numbers - print 0 to 9 not 2 neither 4
 *
 * Return: void
 */
void  print_most_numbers(void)
{
	int count = 48;

	while (count <= 57)
	{
		if (count == 50 || count == 52)
			count++;
		_putchar(count);
		count++;
	}
	_putchar('\n');
}
