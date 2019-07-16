#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * free_grid - frees memory from a 2d array
 *
 * @grid: 2d array
 * @height: height of the array
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		int *currentIntPtr = grid[i];

		free(currentIntPtr);
	}
	free(grid);
}
