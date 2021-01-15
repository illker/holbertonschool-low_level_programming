#include "hash_tables.h"

/**
 * *hash_table_create - function that creates a hash table.
 * @size: is the size of the array
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashish;
	unsigned long int a;

	hashish = malloc(sizeof(hash_table_t));

	if (size == 0 || hashish == NULL)
		return (NULL);

	hashish->array = calloc(size, sizeof(hash_node_t *));

	if (hashish->array == NULL)
		return (NULL);

	hashish->size = size;

	return (hashish);
}
