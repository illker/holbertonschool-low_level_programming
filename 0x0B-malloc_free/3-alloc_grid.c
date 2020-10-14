#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - function that creates an array of chars
 * @width: - Variable int
 * @height: - Variable int
 * Return: pointer to a 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int b, c;

	if (width < 1 || height < 1)
		return (NULL);
	a = (int **)malloc(height * sizeof(int *));
	if (a == NULL)
		return (NULL);
	for (b = 0; b < height; b++)
	{
		a[b] = (int *)malloc(width * sizeof(int));
		if (a[b] == NULL)
		{
			for (; b >= 0; b--)
				free(a[b]);
			free(a);
			return (NULL);
		}
	}
	for (c = 0; c < height; c++)
	{
		for (b = 0; b < width; b++)
			a[c][b] = 0;
	}
	return (a);
}
