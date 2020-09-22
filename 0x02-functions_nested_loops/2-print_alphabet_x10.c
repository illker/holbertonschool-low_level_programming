/* 10 x alphabet  */

#include <holberton.h>

/**
* main -  Prototype 
* Description: prints 10 times the alphabet
* Return: 0
*/

void print_alphabet(void);
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
