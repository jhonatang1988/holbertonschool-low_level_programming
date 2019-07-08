#include "holberton.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to locate
 *
 * Return: a pointer to the position of the character in the string
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (; ; i++)
	{
		if (s[i] == c)
			return (&(s[i]));
		if (!s[i])
			return (NULL);
	}
}
