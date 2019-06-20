#include <stdio.h>
/**
 * main - from 00 to 99
 *
 * Return: always 0
 */
int main(void)
{
	int a1to9;
	int b1to9;

	for (a1to9 = 0; a1to9 <= 9; a1to9++)
	{
		for (b1to9 = 0; b1to9 <= 9; b1to9++)
		{
			putchar(a1to9 + '0');
			putchar(b1to9 + '0');
			if (a1to9 != 9 || b1to9 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
