#include "holberton.h"
/**
 * _islower - prints alphabet
 * @c: character to check if is lowercase
 *
 * Return: 1 for lower. 0 elsewhere
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
