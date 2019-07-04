#include "holberton.h"
/**
 * _strcmp - compare to strings exact same as srtcmp
 * @s1: first string
 * @s2: second string
 *
 * Return: difference in ascii values
 */
int _strcmp(char *s1, char *s2)
{
	int counter;
	int diff;

	for (counter = 0; s1[counter] != '\0' && s2[counter] != '\0'; counter++)
	{
		if (s1[counter] == s2[counter])
			counter++;
		else
			break;
	}
	if (s1[counter + 1] == '\0' || s1[counter + 1] == '\0' )
		diff = s1[counter] - s2[counter];
	else
		diff = s1[counter] - s2[counter];

	return (diff);
}
