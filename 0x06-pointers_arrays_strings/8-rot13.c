#include "holberton.h"
/**
 * rot13 - encodes to rot13
 * @str: string
 *
 * Return: a pointer to string
 */
char *rot13(char *str)
{
	int strcounter = 0;
	int inputcounter;
	char input[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char output[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	while (str[strcounter] != '\0')
	{
		inputcounter = 0;

		while (input[inputcounter] != '\0')
		{
			if (input[inputcounter] == str[strcounter])
			{
				str[strcounter] = output[inputcounter];
				break;
			}
			inputcounter++;
		}
		strcounter++;
	}

	return (&(*str));
}
