/*  00...99 */

#include <stdio.h>

/**
* main - 00...99
* Description: numbers from 00 to 99
* Return: 0
*/

int main(void)
{
int n, m;

for (n = 48; n < 58; n++)
{
for (m = 48; m < 58; m++)
{
putchar(n);
putchar(m);

if (m < 57)
{
putchar(44);
putchar(32);
}
}
}

putchar(10);

return (0);
}
