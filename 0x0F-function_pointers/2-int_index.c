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

	if (size <= 0)
		return (-1);
	if (array != NULL || cmp != NULL)
	{
		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]) != '\0')
				return (a);
		}
	}
	return (-1);
}
