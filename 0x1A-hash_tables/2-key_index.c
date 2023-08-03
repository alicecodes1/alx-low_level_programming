#include "hash_tables.h"

/**
 * key_index - offers the index of a key.
 * @key: the key
 * @size: Hash table array size
 * Return: the index of the hash table array where the key/value pair is stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	if (size == 0)
		return (0);

	idx = hash_djb2(key);
	return (idx % size);
}
