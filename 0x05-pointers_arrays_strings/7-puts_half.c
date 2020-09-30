#include "holberton.h"

/**
 * puts_half - prototype function
 * @str: Variable char pointer
 * Return: void
 */

void puts_half(char *str)
{
	int a, b;

	b = _strlen(str);
	b += 1;

	for (a = b / 2; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
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
