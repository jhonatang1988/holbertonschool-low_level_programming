#include <stdio.h>
/**
 * main - fibonnaci
 *
 * Return: return the fibonnaci series of 50
 */
int main(void)
{
	long double fib1 = 1;
	long double fib2 = 2;
	long double fib3 = 0;
	int count = 1;

	printf("%.Lf, ", fib1);
	printf("%.Lf, ", fib2);

	while (count <= 48)
	{
		fib3 = fib1 + fib2;
		printf("%.Lf", fib3);
		fib1 = fib2;
		fib2 = fib3;
		count++;
		if (count != 49)
			printf(", ");
	}
	printf("\n");

	return (0);
}
