#include "hash_tables.h"
#include <stdio.h>

void print_list(hash_node_t *head);

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table to print
 *
 * Description: prints a hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int last_index;
	hash_node_t *last_node;
	hash_node_t *p;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
			last_node = ht->array[i];
	}

	printf("{");

	if (last_node)
	{
		last_index = key_index((const unsigned char *)last_node->key, ht->size);
		for (i = 0; i < ht->size; i++)
		{
			p = ht->array[i];
			if (p)
				print_list(ht->array[i]);

			if (p && i < last_index)
				printf(", ");
		}
	}

	printf("}\n");
}

/**
 * print_list - prints hash table entry
 * @head: head of the entry
 *
 * Description: prints hash table entry
 * Return: void
 */
void print_list(hash_node_t *head)
{
	hash_node_t *p;

	p = head;
	while (p)
	{
		printf("'%s': '%s'", p->key, p->value);
		if (p->next)
			printf(", ");
		p = p->next;
	}
}

