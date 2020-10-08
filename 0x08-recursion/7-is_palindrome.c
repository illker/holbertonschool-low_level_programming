#include "holberton.h"
/**
 * teamf1 - prototype
 * @s: String
 * Return: int
 */

int teamf1(char *s)
{
	int a;

	a = 0;
	if (*s != 0)
	{
		a++;
		return (a + teamf1(s + 1));
	}
	return (a);
}

/**
 * teamf2 - prototype
 * @s: Variable char
 * @b: Variable int
 * Return: 1 or 0
 */

int teamf2(char *s, int b)
{
	if (b <= 1)
		return (1);
	if (*s != s[b - 1])
		return (0);
	else
		return (teamf2((s + 1), (b - 2)));
}

/**
 * is_palindrome - prototype func
 * @s: String
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int a;

	a = teamf1(s);
	if (a <= 1)
		return (1);
	return (teamf2(s, a));
}
