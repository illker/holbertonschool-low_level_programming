/* alphabet soup */

#include <stdio.h>

/**
* main - alphabet
* Description: all the letters except q and e
* Return: 0
*/

int main(void)
{
char ap;

for (ap = 'a' ; ap <= 'z' ; ap++)
{
if (ap != 'e' && ap != 'q')
putchar (ap);
}

putchar('\n');

return (0);
}
