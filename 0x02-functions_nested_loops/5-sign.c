#include "holberton.h"
/**
 * print_sign - prints alphabet
 * @n: number to check sign
 *
 * Return: 1 for +. 0 for zero. -1 for negative
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
