#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that creates an array of chars
 * @grid: - Variable int
 * @height: - Variable int
 * Return: pointer to a 2 dimensional array
 */

void free_grid(int **grid, int height)
{
	int a, b;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
