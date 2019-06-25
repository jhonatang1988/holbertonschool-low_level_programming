#include "holberton.h"
/**
 * print_alphabet_x10 - prints alphabet
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int atoz;
	int atozx10 = 1;

	while (atozx10 <= 10)
	{

		for (atoz = 'a'; atoz <= 'z'; atoz++)
		{
			_putchar(atoz);
		}
		_putchar('\n');

		atozx10++;
	};
}
