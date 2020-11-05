#include "lists.h"

/**
 * free_listint2 - print all elements of a list_t list
 * @head: linked list to print
 * Return: message to stdout
 */

void free_listint2(listint_t **head)
{
	listint_t *copy = NULL;

	while (head != NULL && *head != NULL)
	{
		copy = *head;
		*head = copy->next;
		free(copy);
	}
}
