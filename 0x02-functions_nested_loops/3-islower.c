/* 3-islower.c */

#include <holberton.h>

/**
* main -  Prototype 
* Description: pchecks for lowercase character
* Return: 0
*/

int _islower(int c);
{
if (c >= 97 && c <= 122)
{
return(1);
else
{
return(0);
}
}
}
