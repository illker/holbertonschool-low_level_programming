#include "hash_tables.h"

/**
 * hash_table_delete - Deletes hash table
 * @ht: Key of the value
 *
 * Return: The index
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int a = 0;
	hash_node_t *hashish = NULL;

	for (a = 0; a < ht->size; a++)
	{
		while (ht->array[a] != NULL)
		{
			hashish = ht->array[a]->next;
			free(ht->array[a]->key);
			free(ht->array[a]->value);
			free(ht->array[a]);
			ht->array[a] = hashish;
		}
	}
	free(ht->array);
	free(ht);
}
