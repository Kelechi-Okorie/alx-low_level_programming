#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: head of the dlist
 * @n: the n member of the new node
 *
 * Description: Adds a new node at the beginning of a dlistint_t list
 * Return: address of the new element on success,
 * NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;
	node->prev = NULL;

	*head = node;

	return (node);
}
