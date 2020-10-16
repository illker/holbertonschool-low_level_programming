#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat- writes the character c to stdout
 * @s1: Variable pointer
 * @s2: Variable pointer
 * @n: Variable unsigned n
 * Return: Pointer.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c, e;
	char *d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
		;
	a++;
	for (b = 0; s2[b] != '\0'; b++)
		;
	if (n >= b)
		n = b;
	d = malloc((a + n + 1) * sizeof(char));
	if (d == NULL)
		return (NULL);
	for (c = 0; s1[c] != '\0'; c++)
		d[c] = s1[c];
	for (e = 0; e < n; e++)
		d[c + e] = s2[e];
	d[c + e] = '\0';
	return (d);
}
