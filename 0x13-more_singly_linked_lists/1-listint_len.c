#include "lists.h"

/**
 * listint_len - print all elements of a list_t list
 * @h: linked list to print
 * Return: message to stdout
 */

size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h)
	{
		h = h->next;
		c++;
	}
	return (c);
}
