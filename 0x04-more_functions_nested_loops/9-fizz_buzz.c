#include <stdio.h>

/**
 * main - FizzBuzz game
 *
 * Return: void
 */
int main(void)
{
	int tohundred = 1;

	while (tohundred <= 100)
	{
		if (tohundred % 3 == 0)
			printf("Fizz");
		if (tohundred % 5 == 0)
			printf("Buzz");
		if (tohundred % 3 != 0 && tohundred % 5 != 0)
			printf("%d", tohundred);
		printf(" ");
		tohundred++;
	}
	printf("\n");
	return (0);
}
