#include "holberton.h"

/**
* _abs -  Prototype
* @n: variable n
* Return: last digit
*/

int print_last_digit(int n)
{
n = n % 10;
_abs(n);
_putchar('0' + n);
return (n);
}
