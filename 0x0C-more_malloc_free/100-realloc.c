#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc - reallocates memory block using malloc and free
 *
 * @ptr: old pointer
 * @old_size: old size
 * @new_size: desired new size
 *
 * Return: pointer of new memory allocation
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *castedNewAddress = NULL;
	char *castedPtr = NULL;

	if (ptr == NULL)
	{
		castedNewAddress = malloc(new_size);
		if (castedNewAddress == NULL)
			return (NULL);
		else
			return (castedNewAddress);
	}
	else
	{

		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}

		if (old_size == new_size)
			return (ptr);

		if (new_size < old_size)
			free(ptr);

		castedNewAddress = malloc(new_size);

		castedPtr = (char *) ptr;

		for (i = 0; i < old_size; i++)
		{
			castedNewAddress[i] = castedPtr[i];
		}
	}

	return (castedNewAddress);
}
