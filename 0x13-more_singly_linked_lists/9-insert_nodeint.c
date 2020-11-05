#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given position
  * @head: pointer to a pointer
  * @idx: takes in the index
  * @n: takes in an integer
  * Return: NULL if function fail
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *copy;
	unsigned int c = 0;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	new->n = n;
	if (new == NULL)
		return (NULL);
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
	return (NULL);
}
