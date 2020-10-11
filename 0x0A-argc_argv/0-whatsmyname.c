#include "holberton.h"
#include <stdio.h>

/**
 * main - main function
 * @argc: - Variable int
 * @argv: - Variable array
 * Return: int value
 */

int main(int argc, char *argv[])
{
	int a = 0;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);
	return (0);
}
