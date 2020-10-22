#include "3-calc.h"

/**
 * main - Main function
 * @argc: Variable int pointer
 * @argv: Variable char
 * Return: int
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*teamf)(int, int) = NULL;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		return (99);
	}
	if (argv[2][0] != '+' && argv[2][0] != '-' &&
	argv[2][0] != '*' && argv[2][0] != '/' && argv[2][0] != '%')
	{
		printf("Error\n");
		return (99);
	}

	teamf = get_op_func(argv[2]);
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", teamf(a, b));
	return (0);
}
