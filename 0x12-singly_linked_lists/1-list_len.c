#include "lists.h"

/**
 * list_len - print all elements of a list_t list
 * @h: linked list to print
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int a;

	for (a = 0; h != NULL; a++)
	{
		h = h->next;
	}
	return (a);
}
