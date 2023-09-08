#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: the key to give index of
 * @size: the size of the table array
 *
 * Description: given a key and size of array,
 * returns index corresponding to that key
 * Return: index of a key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);

	return (hash % size);
}
