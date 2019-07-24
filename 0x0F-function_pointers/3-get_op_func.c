#include <stdlib.h>
#include "function_pointers.h"
#include "3-calc.h"
/**
 * get_op_func - selects another function to perform an operation
 *
 * @s: operator passed
 * @a: int one
 * @b: int second
 *
 * Return: the address or pointer to the function selected
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
		i++;
	}

	return (0);
}
