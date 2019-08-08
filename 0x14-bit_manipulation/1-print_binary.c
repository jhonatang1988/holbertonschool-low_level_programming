#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number
 *
 * @n: number to represent in binary
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = 0;
	unsigned long int res = 0;
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (; i < sizeof(long int) * 8; i++)
	{
		res = ((n << i) & 0x8000000000000000) ? 1 : 0;

		if (res && flag == 0)
			flag = 1;

		if (res || flag)
			_putchar(res + '0');
	}
}
