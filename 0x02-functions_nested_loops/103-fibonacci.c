#include <stdio.h>
/**
 * main - fibonnaci
 *
 * Return: return the fibonnaci series of 50
 */
long double  main(void)
{
	int fib1 = 1;
	int fib2 = 2;
	int fib3 = 0;
	int count = 1;

	int sum;

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
		if (fib3 % 2 == 0)
			sum = sum + fib3;
	}
	printf("%d\n", sum);
	return (sum);
}
