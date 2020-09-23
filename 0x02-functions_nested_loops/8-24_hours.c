#include "holberton.h"

/**
* jack_bauer -  Prototype
* @n: variable n
* Return: prints every minute of the day of Jack Bauer
*/

void jack_bauer(void);
{
int n, m:

for (n = 0; n < 24 ; n++)
{
for (m = 0; m < 60 ; m++)
{
_putchar((n / 10) + 48);
_putchar((n % 10) + 48);
_putchar(58);
_putchar((m / 10) + 48);
_putchar((m % 10) + 48);
_putchar(10);
}
}
}
