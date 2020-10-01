#include "holberton.h"

/**
 * *_strcat - prototype function
 * @dest: - Variable char pointer
 * @src: - Variable char pointer
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0')
	{
		dest[a + b] = src[b];
		b++;
	}
	return (dest);
}
