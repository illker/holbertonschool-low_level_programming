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
		if (str[a - 1] == '\0')
			break;
	}
	_putchar(10);
}
