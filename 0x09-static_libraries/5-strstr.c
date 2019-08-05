#include "holberton.h"
#include <stdio.h>
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
	char *i;
	char *j = needle;

	for (; *haystack != '\0'; haystack++)
	{
		for (i = haystack, j = needle; *j == *i && *j; j++, i++)
			;
		if (*j == '\0')
			return (haystack);
	}
	return ('\0');
}
