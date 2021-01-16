#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: string used to generate hash value
 * @key: string key can not be an empty string
 * @value: is the value associated with the key
 * Return: hash value
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long index;
	unsigned long size;
	hash_node_t *hashish = NULL, *hashish_2;

	if (ht  == NULL || key == NULL || value == NULL)
		return (0);
	size = ht->size;
	index = key_index((const unsigned char *)key, size);
	hashish_2 = ht->array[index];
	while (hashish_2)
	{
		if (strcmp(hashish_2->key, key) == 0)
		{
			free(hashish_2->value);
			hashish_2->value = strdup(value);
			return (1);
		}
		hashish_2 = hashish_2->next;
	}
	hashish = malloc(sizeof(hash_node_t));
	if (hashish == NULL)
		return (0);

	hashish->key = strdup(key);
	hashish->value = strdup(value);
	hashish->next = ht->array[index];
	ht->array[index] = hashish;
	return (1);
}
