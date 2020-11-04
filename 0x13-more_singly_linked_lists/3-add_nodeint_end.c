#include "lists.h"

/**
 * *add_nodeint_end - print all elements of a list_t list
 * @head: linked list to print
 * @n: linked list to print
 * Return: message to stdout
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL, *copy = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		copy = *head;
		while (copy->next != NULL)
			copy = copy->next;
		copy->next = new;
	}
	return (new);
}
