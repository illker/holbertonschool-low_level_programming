#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: - Variable int
 * @argv: - Variable array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a = 0;

	for (; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
