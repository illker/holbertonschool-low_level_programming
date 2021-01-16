#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: the hash table
 * Return: hash value
 */


void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *hashish = NULL;
	unsigned long int index;
	unsigned int i = 0;

	if (ht)
	{
		printf("{");
		for (index = 0; index < ht->size; index++)
		{
			hashish = ht->array[index];
			while (hashish != NULL)
			{
				if (i == 1)
					printf(", ");
				printf("'%s': '%s'", hashish->key, hashish->value);
				i = 1;
				hashish = hashish->next;
			}
		}
		printf("}\n");
	}
}
