#include <stdio.h>
#include <stdlib.h>
/**
 * main - add arguments
 * @argc: arguments count
 * @argv: arguments
 *
 * Return: 0 if success and 1 if not enough arguments are supplied
 */
int main(int argc, char **argv)
{
	int i;
	int sum = 0;

	if (argc < 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		printf("%d\n", sum);
	}

	return (0);
}
