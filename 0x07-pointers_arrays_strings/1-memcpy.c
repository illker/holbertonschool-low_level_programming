#include "holberton.h"

/**
 * *_memcpy - prototype function
 * @dest: - Variable char pointer
 * @src: - Variable char pointer
 * @n: - Variable unsigned n
 * Return: int value
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
