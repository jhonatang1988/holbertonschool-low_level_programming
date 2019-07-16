#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * str_concat - concatenates two strings
 *
 * @s1: pointer of first string
 * @s2: pointer of second string
 *
 * Return: pointer of the two string concatenated
 */
char *str_concat(char *s1, char *s2)
{
	char *newStr = NULL;
	int i;
	int j;

	if (s1 == NULL && s2 == NULL)
		newStr = "";

	if (s1 == NULL)
	{
		s1 = "";
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
		i++;
	}

	if (s2 == NULL)
	{
		s2 = "";
	}
	else
	{
		for (j = 0; s2[j] != '\0'; j++)
			;
		j++;
	}

	i = i + j;

	newStr = malloc((i - 1) * sizeof(char));

	if (newStr == NULL)
		return (NULL);

	for (j = 0; s1[j] != '\0'; j++)
		newStr[j] = s1[j];
	for (i = 0; s2[i] != '\0'; i++, j++)
	{
		newStr[j] = s2[i];
	}
	newStr[j + 1] = '\0';

	return (newStr);
}
