#include "holberton.h"
/**
 * puts2 - prints one char out two
 * @str: string
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int increment = 0;

	while (*(str + increment) != '\0')
	{
		if (increment % 2 == 0)
			_putchar(str[increment]);
		increment++;
	}
	_putchar('\n');
}
