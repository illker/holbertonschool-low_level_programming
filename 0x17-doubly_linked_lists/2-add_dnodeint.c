#include "lists.h"

/**
 * *add_dnodeint - prints all the elements of a list.
 * @head: list
 * @n: list
 * Return: the number of nodes
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_N;

	new_N = malloc(sizeof(dlistint_t));
	if (new_N == NULL)
		return (NULL);
	new_N->n = n;
	new_N->next = *head;
	new_N->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new_N;
	*head = new_N;
	return (new_N);
}
