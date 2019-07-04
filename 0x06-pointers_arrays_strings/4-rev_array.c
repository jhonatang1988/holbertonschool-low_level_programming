#include "holberton.h"
#include <stdio.h>
/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to an integer
 * @n: number of elements of the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int tmpstr[n];

	int counter = 0;
	int counter2 = 0;

	while (counter < n)
	{
		tmpstr[counter] = a[counter];
		counter++;
	}

	while (counter2 < n)
	{
		a[counter2] = tmpstr[counter - 1];
		counter--;
		counter2++;
	}
}
