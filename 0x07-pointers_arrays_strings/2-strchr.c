#include "holberton.h"
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

	for (i = 0; s[i] != c && s[i] != '\0'; i++)
		;
	if (s[i + 1] == '\0')
		return ('\0');
	return (&(s[i]));
}
