#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - prints numbers followed by a new line
 *
 * @separator: string to print between numbers
 * @n: number of parameters
 *
 * Return: numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	int num;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(numbers, int);
		printf("%d", num);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
		else
			printf("\n");
	}
}
