#include "lists.h"

/**
 * *add_node - print all elements of a list_t list
 * @head: linked list to print
 * @str: Variable char
 * Return: number of elements
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	int a;

	n = malloc(sizeof(list_t));
	if (str == NULL || n == NULL)
		return (NULL);
	n->str = strdup(str);
	for (a = 0; str[a] != '\0'; a++)
		;
	n->len = a;
	n->next = *head;
	*head = n;
	return (n);
}
