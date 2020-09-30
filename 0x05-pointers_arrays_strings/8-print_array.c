#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prototype function
 * @a: - a is a int pointer
 * @n: - n is a int pointer
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
