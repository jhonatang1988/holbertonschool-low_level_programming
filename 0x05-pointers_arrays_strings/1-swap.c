#include "holberton.h"
/**
 * swap_int - reset value to 98 with a pointer
 * @*a: first integer
 * @*b: second integer
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{

	int tmp = *a;

	*a = *b;
	*b = tmp;
}
