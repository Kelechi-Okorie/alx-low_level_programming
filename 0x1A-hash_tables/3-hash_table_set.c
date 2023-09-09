#include "hash_tables.h"
#include <string.h>

hash_node_t *add_node(hash_node_t **head, const char *key, const char *value);

/**
* hash_table_set - adds an element to the hash table
* @ht: the hash_table
* @key: the key
* @value: the value associated with the key
*
* Description: adds an element to the hash table
* Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index;

	if (!ht || !key || !strcmp(key, "") || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	node = add_node(&ht->array[index], key, value);
	if (!node)
		return (0);

	return (1);
}

/**
 * add_node - adds a new node to the array index
 * @head: head of the linked list referenced by the array index
 * @key: the key of the node
 * @value: the value associated with the key
 *
 * Description: adds a new node to the array index
 * Return: the new node on success, NULL on failure
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *p;

	p = malloc(sizeof(hash_node_t));
	if (!p)
		return (NULL);

	p->key = strdup(key);
	p->value = strdup(value);
	p->next = NULL;

	if (*head == NULL)
	{
		*head = p;
	}
	else
	{
		p->next = *head;
		*head = p;
	}

	return (*head);
}
