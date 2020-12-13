#include "lists.h"

/**
 * dlistint_len - number of elements in a linked list.
 * @h: Points to the head of the linked list.
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n;

	for (n = 0; h; n++)
		h = h->next;
	return (n);
}
