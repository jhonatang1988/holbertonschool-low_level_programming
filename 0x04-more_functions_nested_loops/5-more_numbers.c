#include "holberton.h"

/**
 * more_numbers - print1 10 times from 0 to 14
 *
 * Return: void
 */
void  more_numbers(void)
{
	int times = 0;

	while (times <= 9)
	{
		int total = 0;
		int count = 48;

		while (total <= 14)
		{
			if (total >= 10)
				_putchar(49);
			if (total == 10)
				count = 48;
			_putchar(count);
			count++;
			total++;
		}
		_putchar('\n');
		times++;
	}
}
