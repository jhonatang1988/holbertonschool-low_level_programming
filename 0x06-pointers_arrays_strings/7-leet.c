#include "holberton.h"
/**
 * leet - 1337
 * @str: string
 *
 * Return: a pointer to string
 */
char *leet(char *str)
{
	int counter = 0;
	char lowercase[] = {'a', 'e', 'o', 't', 'T'};
	char uppercase[] = {'A', 'E', 'O', 'T', 'L'};
	int numbers[] = {'4', '3', '0', '7', '1'};
	int strcounter;

	while (str[counter] != '\0')
	{
		strcounter = 0;
		while (strcounter < 5)
		{
			if (str[counter] == lowercase[strcounter] ||
			    str[counter] == uppercase[strcounter])
			{
				str[counter] = numbers[strcounter];
			}
			strcounter++;
		}
		counter++;
	}

	return (&(*str));
}
