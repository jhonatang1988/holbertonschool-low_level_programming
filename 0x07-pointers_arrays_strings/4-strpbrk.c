#include "holberton.h"
#include <stdio.h>
/**
 * _strpbrk - search in a string a set of bytes
 * @s: string
 * @accept: bytes to search if bytes exists
 *
 * Return: pointer to byte found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	char *address = NULL;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == accept[i])
			{
				if (address == NULL)
					address = &(s[j]);
				if (&(s[j]) < address)
					address = &(s[j]);
			}
		}
	}

	return (address);
}
