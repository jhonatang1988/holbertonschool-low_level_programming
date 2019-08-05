#include "holberton.h"

/**
 * _isupper - check for uppercase
 * @c: character to check
 * Return: 1 for uppercase. 0 otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
