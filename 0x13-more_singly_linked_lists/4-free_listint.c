#include "lists.h"

/**
 * free_listint - print all elements of a list_t list
 * @head: linked list to print
 * Return: message to stdout
 */

void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
