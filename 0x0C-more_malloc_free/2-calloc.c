#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: array
 * @size: size of array
 *
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arrayAddress = NULL;
	unsigned int i;
	char *casted = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arrayAddress = malloc(size * nmemb);

	if (arrayAddress == NULL)
		return (NULL);

	casted = (char *)arrayAddress;

	for (i = 0; i < nmemb; i++)
	{
		casted[i] = 0;
	}

	return (casted);
}
