#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: size of memory to allocate
 *
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *mallocAddress;

	mallocAddress = malloc(b);

	if (mallocAddress == NULL)
	{
		exit(98);
	}
	else
	{
		return (mallocAddress);
	}
}
