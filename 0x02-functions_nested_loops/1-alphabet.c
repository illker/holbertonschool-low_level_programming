#include "holberton.h"
/**
 * print_alphabet.
 *
 * Return: print the alphabet in lowercase.
 */
void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z' ; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
