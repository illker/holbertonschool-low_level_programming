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


/**
 * print_rev - prototype function
 * @s: Variable char pointer
 * Return: void
 */

void print_rev(char *s)
{
	int a;

	a = _strlen(s);
	while (a >= 0)
	{
		_putchar(s[a]);
		a--;
	}
	_putchar(10);
}
