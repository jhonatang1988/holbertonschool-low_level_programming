#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 *
 * @min: start range
 * @max: end range
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i;
	int *intArrayAddress = NULL;

	intArrayAddress = malloc(11);

	if(intArrayAddress == NULL)
		return (NULL);

	if (min > max)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		intArrayAddress[i] = min;
		min++;
	}

	return (intArrayAddress);
}
