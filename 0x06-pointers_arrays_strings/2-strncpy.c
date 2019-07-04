#include "holberton.h"
/**
 * _strncpy - copy a part of string in other
 * @dest: first string
 * @src: second string
 * @n: integer to finish adding
 *
 * Return: dest with the added content of src
 */
char *_strncpy(char *dest, char *src, int n)
{
	int ncounter;

	for (ncounter = 0; ncounter < n && src[ncounter] != '\0'; ncounter++)
	{
		dest[ncounter] = src[ncounter];
	}
	for (; ncounter < n; ncounter++)
		dest[ncounter] = '\0';

	return (dest);
}
