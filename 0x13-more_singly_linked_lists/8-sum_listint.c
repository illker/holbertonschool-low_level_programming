#include "lists.h"

/**
 *sum_listint - function that returns sum of all data (n) of a linked list
 *@head: pointer to head
 *Return: sum of all int
 */

int sum_listint(listint_t *head)
{
	int suma = 0;
	listint_t *copy;

	for (copy = head; copy; copy = copy->next)
		suma += copy->n;
	return (suma);
}
