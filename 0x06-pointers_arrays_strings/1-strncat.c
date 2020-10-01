#include "holberton.h"

/**
 * *_strncat - prototype function
 * @dest: - Variable char pointer
 * @src: - Variable char pointer
 * @n: Variable int
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0' && b < n)
	{
		dest[a + b] = src[b];
		b++;
	}
	return (dest);
}
