#include "holberton.h"

/**
 * puts2 - prototype function
 * @str: - Variable string pointer
 * Return: void
 */

void puts2(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a += 2;
	}
	_putchar(10);
}
