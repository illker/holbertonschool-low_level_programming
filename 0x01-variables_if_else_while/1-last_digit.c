/* Positive anything is better than negative nothing */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - The last digit
* Description: evaluates the number
* Return: 0
*/

int main(void)
{
int n;
char ldo[] = "Last digit of";

srand(time(0));
n = rand() - RAND_MAX / 2;

int mod = n % 10;

if (mod > 5)
{
printf("%s %d is %d and is greater than 5\n", ldo, n, mod);
}
else if (mod == 0)
{
printf("%s %d is %d and is 0\n", ldo, n, mod);
}
else if (mod < 6 && mod != 0)
{
printf("%s %d is %d and is less than 6 and not 0\n", ldo, n, mod);
}
return (0);
}
