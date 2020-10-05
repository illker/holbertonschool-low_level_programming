#include "holberton.h"

/**
 * *_strchr - prototype function
 * @s: - Variable string pointer
 * @c: - Variable char
 * Return: s or NULL
 */

char *_strchr(char *s, char c)
{
	unsigned int a = 0;

	for (; ; a++)
	{
		if (s[a] == c)
			return (&s[a]);
		else if (s[a] == '\0')
			return (0);
	}
}
