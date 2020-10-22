#include "3-calc.h"

/**
 * op_add - prototype function
 * @a: Variable char pointer
 * @b: Variable char pointer
 * Return: Add int
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - prototype function
 * @a: Variable char pointer
 * @b: Variable char pointer
 * Return: Sub int
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - prototype function
 * @a: Variable char pointer
 * @b: Variable char pointer
 * Return: Mul int
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - prototype function
 * @a: Variable char pointer
 * @b: Variable char pointer
 * Return: Div int
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - prototype function
 * @a: Variable char pointer
 * @b: Variable char pointer
 * Return: Mod int
 */

int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n");
	exit(100);
}
