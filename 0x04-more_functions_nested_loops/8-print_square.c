#include "holberton.h"

/**
 * print_square - prints a square and a new line
 * @size: size of the square
 *
 * Return: void
 */
void  print_square(int size)
{

	int squarey = 1;
	char hashtag = '#';

	if (size < 1)
	{
		_putchar('\n');
		return;
	}

	while (squarey <= size)
	{
		int squarex = 1;

		while (squarex <= size)
		{
			_putchar(hashtag);
			squarex++;
		}
		_putchar('\n');
		squarey++;
	}
}
