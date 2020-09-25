#include "holberton.h"

/**
 * print_most_numbers - prototype function
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int a = 48;

	while (a >= 57)
	{
	if (a != 50 && a != 52)
	{
		_putchar(a);
		a++;
	}
	}
	_putchar(10);
}
