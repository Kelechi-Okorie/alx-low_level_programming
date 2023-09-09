#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Description: creates a hash table of a given size
 * Return: pointer to newly created hash table on success
 * NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);

	ht->size = size;

	ht->array = calloc((size_t)size, sizeof(hash_node_t *));
	if (!ht->array)
		return (NULL);

	return (ht);
}
