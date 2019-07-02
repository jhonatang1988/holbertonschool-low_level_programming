#include "holberton.h"
/**
 * _atoi - Entry point
 * @s: pointer to the string
 *
 * Return: int
 */
int _atoi(char *s)
{
	int increment = 0;
	int increment2 = 0;
	int negatives = 0;
	unsigned int entero = 0;

	while (*(s + increment) != '\0')
	{
		increment++;
	};

	while (increment2 < increment)
	{
		if (s[increment2] == '-')
		{
			negatives++;
		}
		if (s[increment2] >= '0' && s[increment2] <= '9')
		{
			if (s[increment2 + 1] >= '0' && s[increment2 + 1] <= '9')
			{
				entero = (s[increment2] - '0') + entero;
				entero = 10 * entero;
			} else
			{
				entero = (s[increment2] - '0') + entero;
			}
			if (s[increment2 + 1] < '0' || s[increment2 + 1] > '9')
				break;
		}
		increment2++;
	}

	if (negatives % 2 != 0)
		return (entero * -1);
	else
		return (entero);
}
