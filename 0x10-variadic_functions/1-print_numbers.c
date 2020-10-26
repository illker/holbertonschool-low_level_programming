#include "variadic_functions.h"
/**
 * print_numbers - sum of all parameters
 * @separator: arguments to function
 * @n: arguments to function
 * Return: print numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list list;

	va_start(list, n);
	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(list, int));
		if (a != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
