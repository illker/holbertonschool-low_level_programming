#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98  - print numbers n to 98
 * @n: int
 * Return: print to stdout num n to 98
 */
void print_to_98(int n)
{
while (n < 98)
{
printf("%d, ", n);
n++;
}
while (n > 98)
{
printf("%d, ", n);
n--;
}
if (n == 98)
{
printf("%d\n", n);
}
}
