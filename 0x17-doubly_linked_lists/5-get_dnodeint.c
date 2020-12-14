#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: pointer to head
 * @index: index of node
 * Return: node at index if does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *n;
	unsigned int a = 0;

	for (n = head ; a < index && n != NULL; a++)
	{
		n = n->next;
	}
	if (n == NULL)
		return (NULL);
	else
		return (n);
}
