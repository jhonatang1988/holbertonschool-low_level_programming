#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - copies a string using pointers
 * @dest: destinations pointer
 * @src: source pointer
 *
 * Return: nothing
 */
char *_strcpy(char *dest, char *src)
{
	int increment = 0;

	while (*(src + increment) != '\0')
	{
		*(dest + increment) = *(src + increment);
		increment++;
	}

	*(dest + increment + 1) = *(src + increment + 1);

	return (&*dest);
}
