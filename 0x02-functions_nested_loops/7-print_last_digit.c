#include "holberton.h"

/**
* _abs -  Prototype
* @n: variable n
* Return: last digit
*/

int print_last_digit(int n)
{
n = n % 10;
n = _abs(n);
return (n);
}
