#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - function that creates an array of chars
 * @str: - Variable char
 * Return: NULL if str = NULL or copy of str
 */

char *_strdup(char *str)
{
	char *a;
	int b, c;

	if (str == NULL)
		return (NULL);
	for (b = 0; str[b] != '\0'; b++)
		;
	b++;
	a = malloc(b * sizeof(*a));
	if (a == NULL)
		return (NULL);
	for (c = 0; c < b; c++)
		a[c] = str[c];
	return (a);
}
