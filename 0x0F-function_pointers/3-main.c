#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * main - receives int and operator to perform an operation
 *
 * @argc: count or arguments
 * @argv: array of arguments
 *
 * Return: result of iteration
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	char *s;
	int result;

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}

	if(argv[2][0] != '+' && argv[2][0] != '-'
	   && argv[2][0] != '*' && argv[2][0] != '/'
	   && argv[2][0] != '%')
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == 0)
	{
		printf("Error\n");
		exit(100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	s = argv[2];

	result = (get_op_func(s))(a, b);

	printf("%d\n", result);
	return (result);
}
