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

/**
  * insert_nodeint_at_index - inserts a new node at a given position
  * @head: pointer to a pointer
  * @idx: takes in the index
  * @n: takes in an integer
  * Return: NULL if function fail
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = NULL;
	listint_t *copy = NULL;
	unsigned int c = 0, b;

	new = malloc(sizeof(listint_t));

	if (!head || !new)
		return (NULL);
	b = listint_len(*head);
	if (idx > b)
		return (NULL);
	new->n = n;	
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	copy = *head;
	while (copy != NULL)
	{
		if (c + 1 == idx)
		{
			new->next = copy->next;
			copy->next = new;
			return (new);
		}
		copy = copy->next;
		c++;
	}
	free(new);
	return (NULL);
}
