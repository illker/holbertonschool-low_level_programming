#include "holberton.h"

/**
* print_alphabet_x10
*/

void print_alphabet_x10(void)
{

int a, b;

b = 10;

while (b <= 10)
{
for (a = 97; a <= 122; a++)
{
_putchar(a);
}
b++;
_putchar(10);
}

}
