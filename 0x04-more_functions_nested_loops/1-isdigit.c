#include "holberton.h"

/**
 * _isdigit - prototype function
 * @c: variable int c
 * Return: 1 and 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
