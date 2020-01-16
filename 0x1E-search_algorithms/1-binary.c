#include "search_algos.h"
/**
 * binary_search - searches a value using binary search algo
 *
 * @array: array to search for
 * @size: size of the array
 * @value: value to search in the array
 *
 * Return: index where value was found or -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l, r, m;

	if (array == NULL)
		return (-1);
	r = size - 1;
	for (l = 0; l < size;)
	{
		printf("Searching in array: ");
		for (size_t i = l; i <= r; i++)
		{
			printf("%d", array[i]);
			if (i != r)
				printf(", ");
		}
		printf("\n");
		m = (l + r) / 2;
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}
	return (-1);
}
