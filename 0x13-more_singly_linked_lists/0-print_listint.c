#include "lists.h"

/**
 * print_listint - print all elements of a list_t list
 * @h: linked list to print
 * Return: message to stdout
 */

size_t print_listint(const listint_t *h)
{
	int c = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}
