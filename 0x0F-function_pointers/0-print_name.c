#include <stdlib.h>
/**
 * print_name - prints a name as is
 *
 * @name: the name to print
 * @f: to print char by char
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
