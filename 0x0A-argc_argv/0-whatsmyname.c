#include <stdio.h>
/**
 * main - prints a program that prints its name
 * @argc: arguments count
 * @argv: arguments
 *
 * Return: always zero
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
