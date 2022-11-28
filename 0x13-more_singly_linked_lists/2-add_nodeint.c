#include "lists.h"

/**
 * add_nodeint - adds new node at beginning of list
 * @head: head of list
 * @n: integer to assign to n member of the node
 *
 * Return: on success address of new element
 * NULL otherwise
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

