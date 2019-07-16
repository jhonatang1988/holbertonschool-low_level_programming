#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * argstostr - concatenates all arguments into one string
 *
 * @ac: arguments size
 * @av: arguments
 *
 * Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	char *pointer = NULL;
	int lenght = 0;
	int k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			lenght++;

		}
	}

	pointer = (char *)malloc(lenght + ac + 1 * sizeof(char));
	if (pointer == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			pointer[k] = av[i][j];
			k++;
		}
		pointer[k] = '\n';
		k++;
	}
	pointer[k] = '\0';
	return (pointer);
}
