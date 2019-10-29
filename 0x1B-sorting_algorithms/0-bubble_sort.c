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
	int flag = 1;
	int temp = 0;
	size_t i = 0;
	size_t j = 0;

	while (i < size)
	{
		flag = 0;
		j = 0;
		while (j < size - 1)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				flag = 1;
			}
			j++;
		}
		if (flag == 0)
			break;

		i++;
	}
}
