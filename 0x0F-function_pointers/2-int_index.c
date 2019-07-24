#include <stdlib.h>
/**
 * int_index - searches for an integer
 *
 * @array: array to search integer
 * @size: size of array
 * @cmp: function that search
 *
 * Return: the index when it does not return 0, -1 no elements match
 * -1 size is less than zero
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		index = cmp(array[i]);
		if (index != 0)
			return (i);
	}

	return (-1);
}
