#include "lists.h"
/**
  * get_nodeint_at_index - return the n node starting at 0
  * @head: takes in struct listint_t *head
  * @index: takes in an index
  * Return: a integer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *copy;
	unsigned int c = 0;

	copy = head;
	while (copy)
	{
		if (c == index)
		{
			return (copy);
		}
		c++;
		copy = copy->next;
	}
	return (copy);
}
