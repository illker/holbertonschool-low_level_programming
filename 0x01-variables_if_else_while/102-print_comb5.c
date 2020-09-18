/*  eating the World */

#include <stdio.h>

/**
* main - Software is eating the World
* Description: two two-digit numbers.
* Return: 0
*/

int main(void)
{
int a, b, c, d;
for (a = 48; a <= 57; a++)
{
for (b = 48; b <= 57; b++)
{
for (c = a; c <= 57; c++)
{
if (c == a)
{
d = b + 1;
}
else
{
d = 48;
}
for (d = d; d <= 57; d++)
{
putchar(a);
putchar(b);
putchar(32);
putchar(c);
putchar(d);
if (!(a == 57 && b == 56 && c == 57 && d == 57))
{
putchar(44);
putchar(32);
}
}
}
}
}
putchar(10);
return (0);
}
