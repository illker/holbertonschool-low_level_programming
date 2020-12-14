#include "lists.h"

/**
 * *insert_dnodeint_at_index- returns the sum of all the data (n) of a list.
 * @h: points to the head of the linked list.
 * @idx: index to add node
 * @n: value to add
 * Return: the total of the sum.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int a = 0;
	dlistint_t *new_N, *tmp, *av;

	if (!h)
		return (NULL);

	new_N = malloc(sizeof(dlistint_t));

	if (!new_N)
		return (NULL);

	if (idx == 0)
	{
		new_N = add_dnodeint(h, n);
		return (new_N);
	}

	for (tmp = *h ; a < (idx -1) && tmp != NULL; a++)
	{
		if (tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
	}

	av = tmp->next;
	new_N->n = n;
	new_N->next = tmp->next;
	new_N->prev = tmp;
	if (tmp->next)
		av->prev = new_N;
	tmp->next = new_N;
	return (new_N);
}
