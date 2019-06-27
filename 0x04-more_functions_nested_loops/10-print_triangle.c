#include "holberton.h"

/**
 * print_triangle - prints a triangle and a new line
 * @size: size of the triangle
 *
 * Return: void
 */
void  print_triangle(int size)
{
	int timesx = 1;

	while (timesx <= size)
	{
		int timesy =  0;
		char space = ' ';
		char hashtag = '#';

		while (timesy < size)
		{
			if ((timesx + timesy) < size)
				_putchar(space);
			else
				_putchar(hashtag);
			timesy++;
		}
		_putchar('\n');
		timesx++;
	}
}
