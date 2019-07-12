#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: arguments count
 * @argv: arguments
 *
 * Return: always zero
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
}
