#include "lists.h"

/**
 * free_list - print all elements of a list_t list
 * @head: linked list to print
 * Return: void
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free_list(head->next);
		free(head->str);
		free(head);
	}
}
