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
	size_t low = 0;
	size_t high = size - 1;
	int mid = high;
	int ind = -1;

	if (!array)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");
		for (size_t i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i != high)
				printf(", ");
		}
		printf("\n");
		mid = low + (high - low) / 2;
		if (array[mid] == value)
		{
			ind = mid;
			break;
		}
		else
		{
			if (array[mid] < value)
				low = mid + 1;
			else
				high = mid - 1;
		}
	}
	return (ind);
}
