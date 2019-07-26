#include <stdarg.h>
/**
 * sum_them_all - addition of all parameters
 *
 * n: number of parameters
 *
 * Return: 0 if n is equal to zero, or the result integer
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	int result = 0;

	if (n == 0)
		return (0);

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		result += va_arg(numbers, int);
	}

	va_end(numbers);
	return (result);
}
