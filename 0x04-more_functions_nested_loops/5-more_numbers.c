#include "holberton.h"

/**
 * more_numbers - prototype function
 *
 * Return: void
 */

void more_numbers(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		b = 0;
		while (b <= 14)
		{
			if ((b / 10) != 0)
			{
				_putchar((b / 10) + 48);
			}
		_putchar((b % 10) + 48);
		b++;
		}
	}
	_putchar(10);
}
