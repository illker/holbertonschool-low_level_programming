/*  Do what you do better */

#include <stdio.h>

/**
* main - Do what you do better
* Description: do more of what you do
* Return: 0
*/

int main(void)
{
int n, m, l;

for (n = 48; n <= 57 ; n++)
{
for (m = n + 1 ; m <= 57 ; m++)
{
for (l = m + 1 ; m <= 57 ; l++)
{
putchar (n);
putchar (m);
putchar (l);

if (n == 56 && m == 57 && l == 57)
{
putchar (10);
break;
}
putchar (44);
putchar (32);
}
}
}
return (0);
}
