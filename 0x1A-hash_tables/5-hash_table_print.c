#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: the hash table
 * Return: hash value
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *hashish;
	unsigned long a;
	int b;

	if (ht == NULL)
		return;
    printf("{");
	for (a = 0; a <= ht->size; a++)
	{
		if (ht->array[a])
		{
            hashish = ht->array[a];
			for (b = 0; hashish != NULL; hashish = hashish->next, b++)
			{
				if (b == 1)
					printf(", ");
				printf("'%s': '%s'", hashish->key, hashish->value);
			}
		}
	}
    printf("}\n");
}
