#include "holberton.h"

/**
 * swap_int - prototype function
 * @a: - a is a int pointer
 * @b: - b is a int pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
