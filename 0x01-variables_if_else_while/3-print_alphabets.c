/* alphABET */

#include <stdlib.h>
#include <stdio.h>

/**
* main - alphABET
* Description:  alphabet in lowercase, and then in uppercase
* Return: 0
*/

int main(void)
{
char ap;

for (ap = 'a' ; ap <= 'z' ; ap++)
    putchar (ap);
for (ap = 'A' ; ap <= 'Z' ; ap++)
    putchar (ap);
putchar('\n');

return (0);
}
