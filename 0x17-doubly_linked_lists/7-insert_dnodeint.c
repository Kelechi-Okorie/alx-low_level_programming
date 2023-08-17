#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at a given index
 * @h: head of the list
 * @idx: position to insert the node
 * @n: data element of the node
 *
 * Description: insterts new node at a given index
 * Return: address of new node on success,
 * NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *p, *node, *prev, *next;
	unsigned int i;

	p = *h;
	prev = NULL;
	next = NULL;
	i = 0;
	while (p && i < idx)
	{
		p = p->next;
		i++;
	}

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->prev = NULL;
	node->n = n;
	node->next = NULL;

	if (p)
	{
		prev = p->prev;
		next = p;
	}

	node->next = next;
	node->prev = prev;

	if (next)
		next->prev = node;
	if (prev)
		prev->next = node;

	if (prev == NULL)
		*h = node;

	return (node);
}
