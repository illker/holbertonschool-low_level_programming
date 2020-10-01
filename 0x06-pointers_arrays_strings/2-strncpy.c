#include "holberton.h"

/**
 * *_strncpy - prototype function
 * @dest: - Variable char pointer
 * @src: - Variable char pointer
 * @n: Variable int
 * Return: char dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
