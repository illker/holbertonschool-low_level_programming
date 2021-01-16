#include "hash_tables.h"

/**
 * hash_table_set - adds an element to hash table
 * @ht: string used to generate hash value
 * @key: string key can not be an empty string
 * @value: is the value associated with the key
 * Return: hash value
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long index;
	unsigned long size;
	hash_node_t *hashish = NULL;

	if (ht  == NULL || key == NULL || value == NULL)
		return (0);

	size = ht->size;
	index = key_index((const unsigned char *)key, size);
	hashish = malloc(sizeof(hash_node_t));
	if (hashish == NULL)
		return (0);

	hashish->key = strdup(key);
	hashish->value = strdup(value);
	hashish->next = ht->array[index];
	ht->array[index] = hashish;

	return (1);
}
