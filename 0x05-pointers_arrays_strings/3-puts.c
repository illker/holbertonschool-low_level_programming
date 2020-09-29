#include "holberton.h"

/**
 * _puts - prototype function
 * @str: Variable int pointer
 * Return: void
 */

void _puts(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
