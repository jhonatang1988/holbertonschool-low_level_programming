#include "holberton.h"
/**
 * print_last_digit - prints alphabet
 * @j: number to get last digit
 *
 * Return: always last digit
 */
int print_last_digit(int j)
{
	int last;

	if (j <= 0)
		j = j * -1;
	last = j % 10;
	_putchar(last + '0');
	return (last);
}
