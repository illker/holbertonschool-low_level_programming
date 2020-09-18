/*  Patience */

#include <stdio.h>

/**
* main - Patience
* Description: possible combinations
* Return: 0
*/

int main(void)
{
int n;

n = 48;

while (n < 58)
{
putchar (n);
if (n < 57)
{
putchar (44);
putchar (127);
}
n++;
}

putchar(10);

return (0);
}
