#include "holberton.h"

/**
* times_table -  Prototype
* Description: Prints a multiplication a times_table
* Return: 0
*/

void times_table(void)
{
int n, m, x;

for (n = 0; n < 10 ; n++)
{
for (m = 0; m < 10 ; m++)
{
x = n * m;
if (m == 0)
{
_putchar(x + 48);
}
else if (k <= 9)
{
_putchar(44);
_putchar(32);
_putchar(32);
_putchar(x + 48);
}
else if (k >= 10)
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
