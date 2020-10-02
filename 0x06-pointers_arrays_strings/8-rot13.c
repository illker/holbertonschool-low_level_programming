#include "holberton.h"

/**
 * *rot13 - prototype function
 * @s: - Variable char pointer
 * Return: int value
 */

char *rot13(char *s)
{
	int a, b;
	char l[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char n[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; l[b] != '\0'; b++)
		{
			if (s[a] == l[b])
				s[a] = n[b];
		}
	}
	return (s);
}
