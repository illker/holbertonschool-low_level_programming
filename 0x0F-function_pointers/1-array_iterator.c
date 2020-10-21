#include "function_pointers.h"

/**
 * array_iterator - prototype function
 * @array: Variable char pointer
 * @size: Function pointer char pointer
 * @action: Function pointer char pointer
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || size <= 0 || action == NULL)
		return;

	for (a = 0; a < size; a++)
		action(array[a]);
}
