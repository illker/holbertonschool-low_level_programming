/* 1-alphabet.c  */

#include "holberton.h"

/**
* main -  Prototype
* Description: the alphabet game
* Return: print a
*/
void print_alphabet(void);
{
int a;
for (a = 97; a <= 122; a++)
{
_putchar(a);
}
_putchar(10);
}
