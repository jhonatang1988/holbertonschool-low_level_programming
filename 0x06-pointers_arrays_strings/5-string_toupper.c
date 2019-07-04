#include "holberton.h"
/**
 * string_toupper -change lowercase to uppercase
 * @str: string
 *
 * Return: nothing
 */
char *string_toupper(char *str)
{
	int counter = 0;

	while (str[counter] != '\0')
	{
		if (str[counter] > 96 && str[counter] < 123)
			str[counter] = str[counter] - 32;
		counter++;
	}

	return (&(*str));
}
