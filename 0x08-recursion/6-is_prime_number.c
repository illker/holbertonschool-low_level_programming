#include "holberton.h"

/**
 * teamf - prototype function
 * @a: - Variable int
 * @b: - Variable int
 * Return: int value
 */

int teamf(int a, int b)
{
	if (a % b == 0 && b != (a / 2))
		return (0);
	else if (b >= (a / 2))
		return (1);
	else
		return (teamf(a, b + 1));
}

/**
 * is_prime_number - prototype function
 * @n: - Variable int
 * Return: int value
 */

int is_prime_number(int n)
{
	if (n > 1)
		return (teamf(n, 2));
	else
		return (0);
}
