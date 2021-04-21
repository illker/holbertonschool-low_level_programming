#include "search_algos.h"

/**
 * linear_search - searches value of int using the Linear search algorithm
 * @array: pointer to the first element of array
 * @size: number of elements in array
 * @value: value to search for
 * Return: If value is not present or array is NULL, return '-1';
 */

int linear_search(int *array, size_t size, int value)
{
	size_t count;

	if (array == NULL)
		return (-1);

	for (count = 0; count < size; count++)
	{
		printf("Value checked array[%lu] = [%d]\n", count, array[count]);
		if (array[count] == value)
			return (count);
	}
	return (-1);
}
