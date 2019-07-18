#include "holberton.h"
#include <stdlib.h>
unsigned int strlenght(char *s1);
/**
 * string_nconcat - concatenates two strings but only a part of the second
 * string
 *
 * @s1: first string
 * @s2: second string
 * @n: character to concatenate from s2
 *
 * Return: pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lenghts1;
	unsigned int lenghts2;
	char *newStringAddress;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	lenghts1 = strlenght(s1);
	lenghts2 = strlenght(s2);

	if (n > lenghts2)
		n = lenghts2;

	newStringAddress = malloc(sizeof(char) * (lenghts1 + n + 1));

	if (newStringAddress == NULL)
		return (NULL);

	for (i = 0; i < lenghts1; i++)
	{
		newStringAddress[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		newStringAddress[i] = s2[j];
		i++;
	}
	newStringAddress[i] = '\0';

	return (newStringAddress);
}
/**
 * strlenght - gets lenght of string
 *
 * @s1: first string
 *
 *
 * Return: length of string
 */
unsigned int strlenght(char *s1)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
		;
	return (i);
}
