#include "holberton.h"
/**
 * main - prints alphabet
 *
 * Return: always 0
 */
int print_alphabet(void)
{
	int atoz;

	for (atoz = 'a'; atoz <= 'z'; atoz++)
	{
		_putchar(atoz);
	}
	_putchar('\n');
}
