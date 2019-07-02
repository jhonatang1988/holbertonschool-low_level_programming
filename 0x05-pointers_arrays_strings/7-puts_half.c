#include "holberton.h"
/**
 * puts_half - prints half of a string
 * @str: string
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int increment = 0;
	int half = 0;

	while (*(str + increment) != '\0')
	{
		increment++;
	}
	increment++;

	if (increment % 2 == 0)
		half = increment / 2;
	else
		half = (increment - 1) / 2;

	while (half < increment - 1)
	{
		_putchar(str[half]);
		half++;
	}

	_putchar('\n');
}
