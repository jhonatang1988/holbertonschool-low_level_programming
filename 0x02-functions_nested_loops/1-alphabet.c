#include "holberton.h"
 /**
  * print_alphabet - prints alphabet normally
  *
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
