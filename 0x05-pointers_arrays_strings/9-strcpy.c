#include "holberton.h"

/**
 * *_strcpy - prototype function
 * @dest: Variable char pointer
 * @src: Variable char pointer
 * Return: dest pointer
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0' ; a++)
	{
		dest[a] = src[a];
	}

	dest[a] = src[a];

	return (dest);
}
