#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prototype function
 * @name: Variable char pointer
 * @f: Function pointer char pointer
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
