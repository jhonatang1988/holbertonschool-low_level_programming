#include "holberton.h"
#include <stdio.h>
#include <stddef.h>
/**
 * _strstr - finds the first occurrence of the substring needle in
 * the string haystack
 * @haystack: string where we look a substring
 * @needle: subtring to look in haystack
 *
 * Return: pointer at the begginning of the found substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int k;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[0] == haystack[i])
			break;
	}

	k = i;

	for (j = 0; needle[j] != '\0'; j++)
	{
		printf("j: %d\n", j);
		if (needle[j] != haystack[i])
			return (NULL);
		i++;
	}

	
	return (&(haystack[k]));

	/*for (j = 0; needle[i] != '\0'; j++)
	{
		for (i = 0; haystack[i] != '\0'; i++)
		{
			if (haystack[i] == needle[j] &&
			    haystack[i + 1] == needle[j + 1]
			{
				if (address == NULL)
					address = &(haystack[i]);
				if (&(haystack[i]) < address)
				address = &(haystack[i]);
				match++;
			}
			else
			{
				return (NULL);
			}
		}
	}
	if (match == j)
		return (address);
	else
	return (NULL);*/
}
