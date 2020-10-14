#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that creates an array of chars
 * @grid: - Variable int
 * @height: - Variable int
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
