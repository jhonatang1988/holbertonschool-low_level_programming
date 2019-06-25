#include "holberton.h"

 /**
  * print_alphabet - Entry point
  *
  * Return - always zero (success)
  */
void print_alphabet(void)
{
	int atoz;

	for (atoz = 'a'; atoz <= 'z'; atoz++)
	{
		_putchar(atoz);
	}
	_putchar('\n');

}
