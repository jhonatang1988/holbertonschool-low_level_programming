#include <stdio.h>
/**
 * main - from 00 to 99 without repetitions
 *
 * Return: always 0
 */
int main(void)
{
	int a1to9;
	int b1to9;

	for (a1to9 = 0; a1to9 <= 8; a1to9++)
	{
		for (b1to9 = 0; b1to9 <= 8; b1to9++)
		{
			if (j == 0)
				j = j + i + 1;
			putchar(a1to9 + '0');
			putchar(b1to9 + '0');
			if (a1to9 != 8 || b1to9 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
