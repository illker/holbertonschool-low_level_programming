#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array,
 * @nmemb: Variable pointer
 * @size: Variable pointer
 * Return: a
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * (nmemb * size));

	if (ptr == '\0')
		return (NULL);

	for (b = 0; b < (nmemb * size); b++)
	{
		ptr[b] = 0;
	}
	return (ptr);
}
