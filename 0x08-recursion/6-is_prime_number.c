#include "holberton.h"
/**
 * is_prime_aux - wether a number is a prime
 * @n: int to check
 * @times: counter
 *
 * Return: 1 if is primer, 0 if not
 */
int is_prime_aux(int times, int n)
{
	int counter = 0;

	if (times <= n)
	{
		if (n % times == 0)
			counter++;
		return (counter + is_prime_aux(times + 1, n));
	}

	return (counter);
}
/**
 * is_prime_number - checks if int is prime
 * @n: int
 *
 * Return: 1 if is prime, 0 if not
 */
int is_prime_number(int n)
{
	if (is_prime_aux(1, n) == 2)
		return (1);
	return (0);
}
