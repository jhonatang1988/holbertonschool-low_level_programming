#include "holberton.h"
/**
 * _abs - prints alphabet
 * @j: number to calculate absolute number
 *
 * Return: always j
 */
int _abs(int j)
{
	if (j < 0)
		return (j * -1);
	else
		return (j);
}
