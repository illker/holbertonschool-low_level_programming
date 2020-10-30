#include "lists.h"

/**
 * *add_node_end - print all elements of a list_t list
 * @head: linked list to print
 * @str: Variable char
 * Return: number of elements
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *c;
	int a;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	if (*head != NULL)
	{
		c = *head;
		for (a = 0; c->next != NULL; a++)
		{
			c = c->next;
		}
		c->next = n;
	}
	else
		*head = n;

	n->next = NULL;
	n->str = strdup(str);
	for (a = 0; str[a] != '\0'; a++)
		;
	n->len = a;

	return (n);
}
