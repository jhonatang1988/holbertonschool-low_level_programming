#include "holberton.h"
/**
 * rev_string - prints a string followed by a new line
 * @*s: pointer to string to revert back
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int increment = 0;
	int increment

	while (*(s + increment) != '\0')
	{
		increment++;
	}

	for (; increment >= 0; increment--)
	{
		_putchar(*(s + increment));
	}

	_putchar('\n');
}
