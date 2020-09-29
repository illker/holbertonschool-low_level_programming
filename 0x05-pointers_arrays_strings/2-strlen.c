#include "holberton.h"

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
