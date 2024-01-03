#include "hash_tables.h"
/**
 * key_index - Computes the index where a key-value pair should be stored.
 * @key: The key, a string.
 * @size: The size of the hash table array.
 *
 * Return: The index at which the key-value pair should be stored.
 *         Adjusted based on the size of the hash table array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);

	return (index % size);
}
