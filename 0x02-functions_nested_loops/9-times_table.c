#include "holberton.h"
/**
 * times_table - table from 0 to 9
 *
 * Return: nothing
 */
void times_table(void)
{
	int x;
	int y;
	int result;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			result = y * x;
			if (result > 9)
			{
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
					_putchar('0' +  result);
				}
			}
			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
