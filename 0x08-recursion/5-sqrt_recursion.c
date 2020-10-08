#include "holberton.h"

/**
 * teamf - prototype function
 * @a: - Variable int
 * @b: - Variable int
 * Return: int value
 */

int teamf(int a, int b)
{
	if (b * b < a)
		return (teamf(a, b + 1));
	else if (b * b > a)
		return (-1);
	else
		return (b);
}

/**
 * _sqrt_recursion - prototype function
 * @n: - Variable int
 * Return: int value
 */

int _sqrt_recursion(int n)
{
	return (teamf(n, 1));
}
