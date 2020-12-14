#include "lists.h"

/**
 * delete_dnodeint_at_index -function that deletes the node at index
 * @head: head of a linked list.
 * @index: index of node to be deleted.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	size_t a = 0;

	if (*head == NULL)
		return (-1);
	tmp = *head;
	while (tmp && a < index)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
		a++;
	}
	if (*head == tmp)
		*head = tmp->next;
	if (tmp->next)
		(tmp->next)->prev = tmp->prev;
	if (tmp->prev)
		(tmp->prev)->next = tmp->next;
	free(tmp);
	return (1);
}
