#include "holberton.h"
/**
 * gettimes - get multiplies
 * @n: number to look square
 * @times: multiplier
 *
 * Return: multiplier
 */
int gettimes(int n, int times)
{
	if (times * times == n)
		return (times);
	else if (times * times > n)
		return (-1);

	return (gettimes(n, times + 1));
}
/**
 * _sqrt_recursion - returns the square root of a number
 * @n: int
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	return (gettimes(n, 1));
}
