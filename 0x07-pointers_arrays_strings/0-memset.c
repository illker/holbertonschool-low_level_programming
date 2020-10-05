#include "holberton.h"

/**
 * *_memset - prototype function
 * @s: - Variable char pointer
 * @b: - Variable char
 * @n: - Variable unsigned n
 * Return: int value
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
	{
		s[n] = b;
	}
	return (s);
}
