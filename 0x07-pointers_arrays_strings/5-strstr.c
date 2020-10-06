#include "holberton.h"

/**
 * *_strstr - prototype function
 * @haystack: - Variable char pointer
 * @needle: - Variable int
 * Return: Void
 */

char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[a] != needle[b])
				break;
			else
				return (&haystack[a]);
		}
	}
	return (0);
}
