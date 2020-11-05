#include "lists.h"

/**
  * delete_nodeint_at_index - delete the node at index
  * @head: pointer to pointer
  * @index: index of node
  * Return: 1 if success
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *dnode = NULL, *copy = NULL;

	unsigned int c = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	copy = *head;
	while (copy != NULL)
	{
		if (index == c + 1)
		{
			dnode = copy->next;
			copy->next = dnode->next;
			free(dnode);
			return (1);
		}
		if (index == 0)
		{
			*head = copy->next;
			free(copy);
			return (1);
		}
		copy = copy->next;
		c++;
	}
	return (-1);
}
