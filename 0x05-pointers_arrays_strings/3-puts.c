#include "holberton.h"
/**
 * _puts - prints a string followed by a new line
 * @str: pointer to string to print
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int increment = 0;

	while (*(str + increment) != '\0')
	{
		_putchar(*(str + increment));
		increment++;
	}

	_putchar('\n');
}
