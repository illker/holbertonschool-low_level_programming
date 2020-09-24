#include "holberton.h"

/**
 * _isupper - prototype fun
 * @c: variable int c
 * Return: 1 and 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
