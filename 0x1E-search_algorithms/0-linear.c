#include "search_algos.h"
/**
 * linear_search - search with linear algo
 *
 * @array: array to search
 * @size: size of the array
 * @value: val to search in the array
 *
 * Return: the index where value was first found or -1 if empty array
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	for (; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			break;
		}
	}
	return (i);
}
