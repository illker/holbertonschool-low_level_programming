#include "holberton.h"

/**
 * *create_array - function that creates an array of chars
 * @size: - Variable int
 * @c: - Variable char
 * Return: NULL if size = 0 or if it fails and pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int b;

	if (size == 0)
		return (NULL);
	a = malloc(size * sizeof(*a));
	if (a == NULL)
		return (NULL);
	for (b = 0; b < size; b++)
		a[b] = c;
	return (a);
}
