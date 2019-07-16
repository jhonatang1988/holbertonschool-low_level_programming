#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * alloc_grid - pointer to a 2d array of integers
 *
 * @width: width of 2d array
 * @height: heigth of 2d array
 *
 * Return: pointer to the 2d array
 */
int **alloc_grid(int width, int height)
{

	int i;
	int j;
	int** matrix = NULL;

	if (width < 1 || height < 1)
		return (NULL);

	matrix = (int **)malloc(sizeof(int *)*height);

	if (matrix == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		matrix[i] = (int *)malloc(sizeof(int) * width);
		if (matrix == NULL)
			return (NULL);
	}

	for(i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			matrix[i][j] = 0;
		}
	}

	return (matrix);
}
