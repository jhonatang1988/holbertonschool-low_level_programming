#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - from a to z in lower case
 *
 * Return: always 0
 */
int main(void)
{
	char atoz;

	for (atoz = 'a'; atoz < 'z'; atoz++)
	{
		if (atoz != 'q' && atoz != 'e')
			putchar(atoz);
	}
	putchar('\n');
	return (0);
}
