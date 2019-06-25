#include "holberton.h"
/**
 * print_last_digit - prints alphabet
 *
 * Return: always 0
 */
int print_last_digit(int j)
{
	int last;
	if (j <= 0)
		j = j * -1;
	last = j % 10;
	_putchar(last + '0');
	return last;
}
