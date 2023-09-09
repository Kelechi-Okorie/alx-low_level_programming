#include "hash_tables.h"
#include <string.h>
#include <stdio.h>

hash_node_t *add_node(hash_node_t **head, const char *key, const char *value);
int key_exists(hash_node_t *head, const char *key);
void replace_value(hash_node_t *head, const char *key, const char *value);

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

	if (key_exists(*ht->array, key))
	{
		replace_value(ht->array[index], key, value);
		return (1);
	}

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

/**
 * key_exists - checks if key exists in the hash table
 * @head: head of the linked list associated with the index
 * @key: the key to check
 *
 * Description: checks if key exists in the hash table
 * Return: 1 if true, 0 if false
 */
int key_exists(hash_node_t *head, const char *key)
{
	hash_node_t *p;

	p = head;

	while (p)
	{
		if (!strcmp(p->key, key))
			return (1);

		p = p->next;
	}

	return (0);
}

/**
 * replace_value - replace a value given the hash table, the key and the value
 * @head: pointer to head of the hash table
 * @key: the key to search
 * @value: the new value
 *
 * Description: replace a value given the hash table, the key and the value
 * Return: void
 */
void replace_value(hash_node_t *head, const char *key, const char *value)
{
	hash_node_t *p;

	p = head;

	while (p && strcmp(p->key, key))
		p = p->next;

	free(p->value);
	p->value = strdup(value);
}
