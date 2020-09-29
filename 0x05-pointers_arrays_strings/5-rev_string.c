#include "holberton.h"

/**
 * rev_string - prototype function
 * @s: Variable char pointer
 * Return: void
 */

void rev_string(char *s)
{
	int a, b;
	char c;

	a = _strlen(s);
	a--;
	b = 0;

	while (b <= a)
	{
		c = s[a];
		s[a] = s[b];
		s[b] = c;
		b++;
		a--;
	}
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
