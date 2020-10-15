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
	char *s;
	unsigned int a;
	unsigned int b;
	unsigned int c;
	unsigned int d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (c = 0; *(s1 + c); c++)
		;
	for (d = 0; *(s2 + d); d++)
		;
	d++;

	if (n > d)
		s = malloc((c + d) * sizeof(*s));
	else
		s = malloc((c + n + 1) * sizeof(*s));
	if (s == NULL)
		return (NULL);

	for (a = 0; a < c; a++)
		s[a] = s1[a];
	for (b = 0; b < d && b < n; a++, b++)
		s[a] = s2[b];
	s[a] = '\0';

	return (s);
}
