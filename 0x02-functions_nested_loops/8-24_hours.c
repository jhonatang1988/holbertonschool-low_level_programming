#include "holberton.h"
/**
 * jack_bauer - prints alphabet
 *
 * Return: always 0
 */
void jack_bauer(void)
{
	int w;
	int x;
	int y;
	int z;

	for (w = 0; w <= 2; w++)
	{
		for (x = 0; x <= 9; x++)
		{
			if (w == 2 && x == 4)
				break;
			for (y = 0; y <= 5; y++)
			{
				for (z = 0; z <= 9; z++)
				{
					_putchar (w + '0');
					_putchar (x + '0');
					_putchar (':');
					_putchar (y + '0');
					_putchar (z + '0');
					_putchar ('\n');
				}
			}
		}
	}
}
