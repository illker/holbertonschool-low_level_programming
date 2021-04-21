#include "search_algos.h"

/**
 * binary_search - searches value of int using the Binary search algorithm
 * @array: pointer to the first element of array
 * @size: number of elements in array
 * @value: value to search for
 * Return: If value is not present or array is NULL, return '-1';
 */

int binary_search(int *array, size_t size, int value)
{
	int a;
	int b;
	int l = 0;
	int r = size - 1;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		printf("Searching in array: ");
		for (a = l; a <= r; a++)
		{
			if (a == r)
				printf("%i\n", array[a]);
			else
				printf("%i, ", array[a]);
		}
		b = l + (r - l) / 2;
		if (array[b] == value)
			return (b);
		else if (value > array[b])
			l = b + 1;
		else if (value < array[b])
			r = b - 1;
	}
	return (-1);
}
