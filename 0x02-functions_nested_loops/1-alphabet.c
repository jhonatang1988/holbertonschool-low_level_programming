#include "holberton.h"
 /**
  * print_alphabet - prints alphabet normally
  *
  * Return: always 0
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
