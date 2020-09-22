#include "holberton.h"

/**
* print_alphabet_x10 - Print 10 times the alphabet, in lowercase.
*/

void print_alphabet_x10(void)
{

int a, b;

b = 0;

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
