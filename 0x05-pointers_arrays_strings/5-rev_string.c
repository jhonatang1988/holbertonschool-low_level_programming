#include "holberton.h"
/**
 * rev_string - prints a string followed by a new line
 * @s: pointer to string to revert back
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int increment = 0;
	int increment2 = 0;
	int increment3 = 0;
	char tmpstr[10];

	while (*(s + increment) != '\0')
	{
		tmpstr[increment2] = (*(s + increment2));
		increment++;
		increment2++;
	}

	for (; increment > 0; --increment)
	{
		s[increment3] = tmpstr[increment - 1];
		increment3++;
	}

}
