#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - function that creates an array of chars
 * @s1: - Variable char
 * @s2: - Variable char
 * Return: a string concatenate
 */

char *str_concat(char *s1, char *s2)
{
	int a, b, c, e;
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
	d = malloc((a * sizeof(*s1)) + (b * sizeof(*s2)));
	a--;
	b++;
	if (d == NULL)
		return (NULL);
	for (c = 0, e = 0; c < (a + b); c++)
	{
		if (c < a)
			d[c] = s1[c];
		else
		{
			d[c] = s2[e];
			e++;
		}
	}
	return (d);
}
