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
	void *newAddress = NULL;
	unsigned int i;
	char *castedNewAddress = NULL;
	char *castedPtr = NULL;

	if (old_size == new_size)
		return (ptr);

	newAddress = malloc(old_size + new_size);

	if(newAddress == NULL)
		return (NULL);

	castedNewAddress = (char *) newAddress;
	castedPtr = (char *) ptr;

	for (i = 0; i < old_size ;i++)
	{
		castedNewAddress[i] = castedPtr[i];
	}

	return (newAddress);
}
