#include "holberton.h"
/**
 * print_times_table - table from 0 to 9
 * @n: number to make times table
 *
 * Return: 0 if out of range
 */
void print_times_table(int n)
{
	int x;
	int y;
	int result;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				result = y * x;
				if (result > 99 && result < 1000)
				{
					_putchar('0' + result / 100);
					_putchar('0' + ((result / 10) % 10));
					_putchar('0' + result % 10);
				} else
				{
					if (result > 9 && result < 100)
					{
						_putchar(' ');
						_putchar('0' + result / 10);
						_putchar('0' + result % 10);
					} else
					{
						if (y == 0)
						{
							_putchar('0' + result);
						} else
						{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' +  result);
						}
					}
				}
				if (y != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
