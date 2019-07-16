#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initialized it
 *
 * @size: size of the array
 * @c: char to initialized
 *
 * Return: NULL if size is 0, NULL if fails to create a pointer. Or pointer
 * to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size == 0)
		return (NULL);

	char *str = (char *)malloc(size * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	i++;
	str[i] = '\0';

	return (str);

}
