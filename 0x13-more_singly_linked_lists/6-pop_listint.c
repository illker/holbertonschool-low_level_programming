#include "lists.h"
/**
  * pop_listint - function that deletes the head node & returns its data
  * @head: pointer to a pointer
  * Return: n, head's data
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *copy = NULL;

	if (*head == NULL)
		return (0);
	copy = *head;
	*head = copy->next;
	n = copy->n;
	free(copy);
	return (n);
}
