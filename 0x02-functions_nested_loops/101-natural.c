#include <stdio.h>

/**
 * main - prints the sum and multiples of 3 or 5 below 1024
 * Return: 0
 */

int main(void)
{
int n, m;

for (n = 0; n < 1024; n++)
{
if ((n % 3 == 0 || n % 5 == 0))
{
m = m + n;
}
}
printf("%d\n", m);

return (0);
}
