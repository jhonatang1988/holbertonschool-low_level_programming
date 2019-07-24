#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * main - receives int and operator to perform an operation
 *
 * @a: int one
 * @b: int second
 * @s: operator
 *
 * Return: result of iteration
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	char *s;
	int result;

	if (argc < 4 || argc > 4 || (argv[2][0] != '+' && argv[2][0] != '-'
				     && argv[2][0] != '*' && argv[2][0] != '/'
				     && argv[2][0] != '%')
		)
	{
		printf("Error\n");
		return (0);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	s = argv[2];

	result = (get_op_func(s))(a, b);

	printf("%d\n", result);
	return (result);
}
