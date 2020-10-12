#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - main function
 * @c: - Variable int
 * Return: 0 and 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

/**
 * main - main function
 * @argc: - Variable int
 * @argv: - Variable array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int s = 0, a = 1, b;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (; a < argc; a++)
		{
			for (b = 0; argv[a][b] != '\0'; b++)
			{
				if (_isdigit(argv[a][b]) != 1)
				{
					printf("Error\n");
					return (1);
				}
			}
			s = s + atoi(argv[a]);
		}
		printf("%d\n", s);
		}
	return (0);
}
