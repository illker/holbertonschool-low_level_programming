#include "lists.h"

/**
 * free_dlistint - frees a list.
 * @head: points to the head of a linked list.
 * Return: void.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *n;

	if (!head)
		return;
	while (head)
	{
		n = head;
		head = head->next;
		free(n);
	}
}
