#include <stdio.h>
/**
 * main - from 0 to 9
 *
 * Return: always 0
 */
int main(void)
{
	int atoz;

	for (atoz = 0; atoz <= 9; atoz++)
		putchar(atoz + '0');
	for (atoz = 'a'; atoz <= 'f'; atoz++)
		putchar(atoz);

	putchar('\n');
	return (0);
}
