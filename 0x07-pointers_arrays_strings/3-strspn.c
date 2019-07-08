#include "holberton.h"
#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: bytes to compare if exist in s
 *
 * Return: unsigned int for number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int n;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0, n = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == s[j])
			{
				n++;
			}
		}
		if (n == 0)
			return (j);
	}

	return (j);
}
