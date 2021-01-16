#include "hash_tables.h"

/**
 * hash_table_get - give a value associated with a key
 * @ht: string used to generate hash value
 * @key: string key can not be an empty string
 * Return: hash value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long index;
	hash_node_t *hashish;
	unsigned int a;

	if (ht  == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	hashish = ht->array[index];

	if (hashish == NULL)
		return (NULL);

	for (a = strcmp(key, hashish->key); hashish != NULL; )
	{
		if (a == 0)
			return (hashish->value);
		hashish = hashish->next;
	}
	return (NULL);
}
