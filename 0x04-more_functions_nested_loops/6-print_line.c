#include "holberton.h"

/**
 * print_line - prototype function
 * @n: Variable int
 * Return: n
 */

void print_line(int n)
{
	int a = 0;

	while (a < n)
	{
		_putchar(95);
		a++;
	}
	_putchar(10);
}
