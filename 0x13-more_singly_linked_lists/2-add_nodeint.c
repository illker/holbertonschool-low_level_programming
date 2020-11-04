#include "lists.h"

/**
 * *add_nodeint - print all elements of a list_t list
 * @head: linked list to print
 * @n: linked list to print
 * Return: message to stdout
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
