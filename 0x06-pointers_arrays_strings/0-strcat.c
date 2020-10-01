#include "holberton.h"

/**
 * *_strcat - prototype function
 * @dest: - Variable char pointer
 * @src: - Variable char pointer
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int a, b = 0;

	a = _strlen(dest);

	while (src[a + b] != '\0')
	{
		dest[a + b] = src[b];
		b++;

	}
	dest[a] = '\0';
	return (dest);
}

/**
 * _strlen - prototype function
 * @s: - Variable string pointer
 * Return: void
 */

int _strlen(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
		a++;

	return (a);
}
