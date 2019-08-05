#include "holberton.h"
/**
 * _isalpha - prints alphabet
 * @c: checks for alphabetic character
 *
 * Return: always 1 for alphabetic character. 0 elsewhere
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
