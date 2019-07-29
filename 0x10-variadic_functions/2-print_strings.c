#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - print string followed by a new line
 *
 * @separator: string to print between numbers
 * @n: number of parameters
 *
 * Return: numbers
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	unsigned int size;
	char *string = NULL;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{

		string = va_arg(strings, char*);
		if (string == NULL)
			printf("(nil)");
		for (size = 0; string[size] != '\0'; size++)
		{
			printf("%c", string[size]);
		}
		putchar('\0');
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
		else
			printf("\n");
	}
}
