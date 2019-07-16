#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memery, copying a
 * a string
 *
 * @str: pointer of string to copy
 *
 * Return: pointer to the new string. NULL if insufficient memory.
 * NULL if str=NULL
 */
char *_strdup(char *str)
{

	int i;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	char *dubStr = malloc(i * sizeof(char));

	if (dubStr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		dubStr[i] = str[i];
	}
	i++;
	dubStr[i] = '\0';

	return (dubStr);
}
