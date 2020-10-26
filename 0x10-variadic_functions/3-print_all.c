#include "variadic_functions.h"
/**
 * print_all - sum of all parameters
 * @format: arguments to function
 * Return: sum
 */

void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int a = 0, b;
	char *h;

	while (format != NULL)
	{
		va_start(list, format);
		while (format[a] != '\0')
		{
			b = 1;
			switch (format[a])
			{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				h = va_arg(list, char *);
				if (h == NULL)
					h = "(nil)";
				printf("%s", h);
				break;
			default:
				b = 0;
				break;
			}
			if (format[a + 1] && b)
				printf(", ");
			a++;
		}
		va_end(list);
		break;
	}
	printf("\n");
}

