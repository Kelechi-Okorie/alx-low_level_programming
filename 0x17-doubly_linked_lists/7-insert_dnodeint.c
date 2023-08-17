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
	dlistint_t *p, *q, *node;
	unsigned int i;

	p = *h;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;
	node->prev = NULL;

	if (p == NULL)
	{
		*h = node;
		return (node);
	}

	for (i = 0; i < idx && p != NULL; i++)
		p = p->next;

	if (p == NULL)
	{
		free(node);
		return (NULL);
	}

	q = p->prev;

	if (q)
		q->next = node;
	node->prev = q;
	node->next = p;
	p->prev = node;

	return (node);
}
