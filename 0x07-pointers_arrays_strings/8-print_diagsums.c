#include "holberton.h"

/**
 * print_diagsums - prototype function
 * @a: - Variable char pointer
 * @size: - Variable int
 * Return: Void
 */

void print_diagsums(int *a, int size)
{
	int b, c = 0, d = 0;

	for (b = 0; b < size * size; b += (size + 1))
		c = c + a[b];

	for (b = size - 1; b < (size * size) - (size - 1); b += (size - 1))
		d = d + a[b];

	printf("%d, %d\n", c, d);
}
