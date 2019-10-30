#include "sort.h"
/**
 *swaping - quicksort using the implement the Lomuto.
 *@array: array to sort.
 *@lowest: Lowest index of the partition.
 *@higher: highest index of the partition.
 *@size: size of array
 *Return: sorted
 */
size_t swaping(int *array, int lowest, int higher, size_t size)
{
	int i, n, swap, pivot;

	pivot = array[higher];
	i = lowest - 1;
	for (n = lowest; n < higher; n++)
	{
		if (array[n] < pivot)
		{
			i++;
			if (i != n)
			{
				swap = array[i];
				array[i] = array[n];
				array[n] = swap;
				print_array(array, size);
			}
		}
	}
	if (array[higher] < array[i + 1])
	{
		swap = array[i + 1];
		array[i + 1] = array[higher];
		array[higher] = swap;
		print_array(array, size);
	}
	return (i + 1);
}

/**
 *sorting - Sort a partition of an array integer.
 *@array: array to sort.
 *@lowest: index of the partition.
 *@higher: highest indes of the partition function sort.
 *@size: size of the array.
 */

void sorting(int *array, int lowest, int higher, size_t size)
{
	int swap;

	if (lowest < higher)
	{
		swap = swaping(array, lowest, higher, size);
		sorting(array, lowest, swap - 1, size);
		sorting(array, swap + 1, higher, size);
	}
}

/**
 * quick_sort - sort an array of integers in ascending order using
 * lomuto sorting
 *
 * @array: array to sort
 * @size: size of the array
 *
 * Return: nothing
 */

void quick_sort(int *array, size_t size)
{
	size_t s;

	s = size - 1;
	if (array != NULL && size > 2)
		sorting(array, 0, s, size);
}
