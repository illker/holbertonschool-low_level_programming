/* Hexadecimal */

#include <stdio.h>

/**
* main - Hexadecimal
* Description: numbers of base 16 in lowercase
* Return: 0
*/

int main(void)
{
int n, m;

n = 48;
m = 97;

while (n <= 57)
{
putchar (n);
n++;
}

while (m <= 102)
{
putchar (m);
m++;
}

putchar('\n');

return (0);
}
