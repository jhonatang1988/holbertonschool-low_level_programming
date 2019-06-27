#include <stdio.h>

/**
 * main - find largest prime factor of a number 612852475143
 *
 * Return: always 0
 */
int main(void)
{
	long int number = 612852475143;
	int i = 1;

	while (i <= number)
	{
		if (number % i == 0)
		{
			if (number == i)
				printf("%ld\n", number);
			number = number / i;
			i = 1;
		}
		i++;
	}
	return (0);
}
