#include "holberton.h"

/**
* main -  Prototype
* Description: the alphabet game
* Return: print a
*/

void print_alphabet(void)
{
	int xa;

	for (xa = 97; xa <= 122; xa++)
	{
		_putchar(xa);
	}

	_putchar(10);
}
