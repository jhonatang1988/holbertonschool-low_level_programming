#include <stdio.h>
/**
 * main - fibonnaci
 *
 * Return: return the fibonnaci series of 50
 */
long double  main(void)
{
	long double fib1 = 1;
	long double fib2 = 2;
	long double fib3 = 0;
	int count = 1;

	long double sum;

	fib1 = 1;
	fib2 = 2;
	count = 1;
	sum = 3;

	while (count <= 30)
	{
		fib3 = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib3;
		count++;

		sum = sum + fib3;
	}
	printf("%.Lf\n", sum);
	return (sum);
}
