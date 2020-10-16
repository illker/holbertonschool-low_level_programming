#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range- allocates memory for an array,
 * @min: Variable pointer
 * @max: Variable pointer
 * Return: a
 */

int *array_range(int min, int max)
{
	int *a;
	int b, c = 0;

	if (min > max)
		return (NULL);
	a = malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
		return (NULL);
	for (b = min; b <= max; b++)
	{
		a[c] = b;
		c++;
	}
	return (a);
}
