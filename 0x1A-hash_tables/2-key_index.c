#include "hash_tables.h"

/**
 * key_index - give the key index
 * @key: key
 * @size: size of table
 * Return: hash value
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2((unsigned char *)key) % size);
}
