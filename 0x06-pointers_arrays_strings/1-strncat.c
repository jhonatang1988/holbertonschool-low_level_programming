#include "holberton.h"
/**
 * _strncat - concatenates two string until n bytes
 * @dest: first string
 * @src: second string
 * @n: integer to finish adding
 *
 * Return: dest with the added content of src
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlength = 0;
	int srclength = 0;

	for (destlength = 0; dest[destlength] != '\0'; destlength++)
	{
	}

	for (srclength = 0; srclength < n && src[srclength] != '\0'; srclength++)
	{
		dest[destlength] = src[srclength];
		destlength++;
	}
	dest[destlength] = '\0';

	return (dest);
}
