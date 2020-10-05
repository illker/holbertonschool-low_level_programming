#include "holberton.h"

/**
 * _strspn - prototype function
 * @s: - Variable char pointer
 * @accept: - Variable char pointer
 * Return: n bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b, c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				break;
			}
		}
		if (accept[b] == '\0')
			return (c);
	}
	return (c);
}
