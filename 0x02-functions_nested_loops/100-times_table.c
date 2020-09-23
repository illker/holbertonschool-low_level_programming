#include "holberton.h"

/**
* times_table -  Prototype
* @n: int variable
* Return: 0
*/

void print_times_table(int n)
{
int n, m, x;
if ((n < 15) && (n >= 0))
{
for (n = 0; n < 10 ; n++)
{
for (m = 0; m < 10 ; m++)
{
x = n * m;
if (m == 0)
{
_putchar(x + 48);
}
else if (x <= 9)
{
_putchar(44);
_putchar(32);
_putchar(32);
_putchar(x + 48);
}
else if (x >= 10)
{
_putchar(44);
_putchar(32);
_putchar((x / 10) + 48);
_putchar((x % 10) + 48);
}
}
_putchar(10);
}
}
}
