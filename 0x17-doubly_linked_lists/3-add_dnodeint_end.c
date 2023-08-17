#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: head of the list
 * @n: n member of the new node
 *
 * Description: adds a new node at the end of a dlistint_t list
 * Return: address of the new node on success,
 * NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *p;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;
	node->prev = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	p = *head;
	while (p->next)
	{
		p = p->next;
	}

	p->next = node;
	node->prev = p;

	return (node);
}

