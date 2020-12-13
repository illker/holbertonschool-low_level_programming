#include "lists.h"

/**
 * *add_dnodeint_end - adds a new node at the end of a list
 * @head: head of the list
 * @n: numbers to add
 * Return: the address of the new element, NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp_N, *new_N;

	new_N = malloc(sizeof(dlistint_t));
	if (new_N == NULL)
		return (NULL);
	new_N->n = n;
	new_N->next = NULL;
	*temp_N = *head
	if (*head == NULL)
	{
		new_N->prev = NULL;
		*head = new_N;
		return (new_N);
	}
	while (temp_N->next != NULL)
	{
		temp_N = temp_N->next;
	}
	temp_N->next = new_N;
	new_N->prev = temp_N;
	return (new_N);
}
