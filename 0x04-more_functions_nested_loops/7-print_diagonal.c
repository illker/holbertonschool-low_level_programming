#include "holberton.h"

/**
 * print_diagonal - prototype function
 * @n: Variable int
 * Return: n
 */

void print_diagonal(int n)
{
	int x;
	int a;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (a = 0; a < x; a++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('10');
		}
	}
	else
	{
		_putchar('10');
	}
}
