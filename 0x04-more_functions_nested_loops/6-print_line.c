#include "holberton.h"

/**
 * print_line - draws a straight line in terminal
 * @n: number of _ characters to print
 *
 * Return: void
 */
void  print_line(int n)
{
	int endline = 1;
	char underscore = '_';

	while (endline <= n)
	{
		_putchar(underscore);
		endline++;
}
	_putchar('\n');
}
