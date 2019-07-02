#include "holberton.h"
/**
 * print_rev - prints a string followed by a new line
 * @s: pointer to string to print in reverse
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int increment = 0;

	while (*(s + increment) != '\0')
	{
		increment++;
	}

	for (; increment >= 0; increment--)
	{
		_putchar(*(s + increment - 1));
	}

	_putchar('\n');
}
