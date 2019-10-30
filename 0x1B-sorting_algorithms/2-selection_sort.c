#include "sort.h"
/**
 * selection_sort - sort an array of integers in ascending order using
 * selection sorting
 *
 * @array: array to sort
 * @size: size of the array
 *
 * Return: nothing
 */

void selection_sort(int *array, size_t size)
{
        int temp = 0, min = 0, pos;
        size_t i = 0, j = 0;

        for(i = 0; i < size; i++)
        {
                min = array[i];
                for(j = i; j < size; j++)
                {
                        if(min > array[j])
                        {
                                min = array[j];
                                pos = j;
                        }
                }
                if(min != array[i])
                {
                        temp = array[i];
                        array[i] = min;
                        array[pos] = temp;
                        print_array(array, size);
                }
        }
}
