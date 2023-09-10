#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - retrieves value associated with a key
 * @ht: the hash table
 * @key: the key
 *
 * Description: retrieves value associtated with a key
 * Return: the value associated with the key @key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *p = NULL;

	if (!ht || !key || !strcmp(key, ""))
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	p = ht->array[index];

	while (p)
	{
		if (!strcmp(p->key, (char *)key))
			return (p->value);

		p = p->next;
	}

	return (NULL);
}
