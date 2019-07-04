#include "holberton.h"
/**
 * cap_string - capitalize an string
 * @str: string
 *
 * Return: nothing
 */
char *cap_string(char *str)
{
	int counter = 0;
	char wordsep[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', ' '
			  , '\t', '\n'};
	int wordsepcounter;

	if (str[0] != '\0' && str[0] > 96 && str[0] < 123)
		str[0] = str[0] - 32;

	while (str[counter] != '\0')
	{
		wordsepcounter = 0;

		while (wordsepcounter < 13)
		{
			if (str[counter] == wordsep[wordsepcounter])
			{
				if (str[counter + 1] > 96 && str[counter + 1] < 123)
				{
					str[counter + 1] = str[counter + 1] - 32;
				}
			}
			wordsepcounter++;
		}
		counter++;
	}

	return (&(*str));
}
