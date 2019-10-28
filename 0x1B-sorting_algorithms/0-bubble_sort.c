#include "sort.h"
/**
 * bubble_sort - sort an array of integers in ascending order using
 * bubble sorting
 *
 * @array: array to sort
 * @size: size of the array
 *
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int j = 0;

	for (; j < size; j++)
	{
		for (unsigned int i = 0; (size_t)i < size - j - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				int temp = array[i + 1];

				array[i + 1] = array[i];
				array[i] = temp;
				print_array(array, size);
			}
		}
	}
}
