#include "holberton.h"
/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 *
 * Return: dest with the added content of src
 */
char *_strcat(char *dest, char *src)
{
	int destlength = 0;
	int srclength = 0;

	while (dest[destlength] != '\0')
		destlength++;

	while (src[srclength] != '\0')
	{
		dest[destlength] = src[srclength];
		srclength++;
		destlength++;
	}

	return (&(*dest));
}
