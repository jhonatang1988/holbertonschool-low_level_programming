#include <stdlib.h>
/**
 * array_iterator - iterates an array
 *
 * @array: array to iterate
 * @size: size of array
 * @action: function that iterates
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
