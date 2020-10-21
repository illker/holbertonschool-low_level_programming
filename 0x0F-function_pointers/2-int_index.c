#include "function_pointers.h"

/**
 * int_index - prototype function
 * @array: Variable char pointer
 * @size: Variable int
 * @cmp: Function pointer int
 * Return: index int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]) != 0)
				return (a);
		}
	}
	return (-1);
}
