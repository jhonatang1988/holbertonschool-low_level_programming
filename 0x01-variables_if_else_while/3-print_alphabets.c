#include <stdio.h>
/**
 * main - from a to z in lower case
 *
 * Return: always 0
 */
int main(void)
{
	char atoz;

	for (atoz = 'a'; atoz <= 'z'; atoz++)
		putchar(atoz);
	for (atoz = 'A'; atoz <= 'Z'; atoz++)
		putchar(atoz);
	putchar('\n');
	return (0);
}
