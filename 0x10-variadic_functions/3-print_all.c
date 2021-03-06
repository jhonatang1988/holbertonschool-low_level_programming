#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - prints anything
 *
 * @format: list of types of arguments passed to the function
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	int j = 0;

	va_list listToPrint;

	va_start(listToPrint, format);

	while (format[i])
		i++;

	while (format[j] != '\0')
	{
		switch (format[j])
		{
		case 'c':
			printf("%c", va_arg(listToPrint, int));
			break;
		case 'i':
			printf("%d", va_arg(listToPrint, int));
			break;
		case 's':
			printf("%s", va_arg(listToPrint, char*));
			break;
		case 'f':
			printf("%f", va_arg(listToPrint, double));
		default:
			break;
		}
		j++;
		if (j != i)
		{
			if (format[j] == 'c'
			   || format[j] == 's'
			   || format[j] == 'i'
			   || format[j] == 'f')
			printf(", ");
		}
	}
	putchar('\n');
}
