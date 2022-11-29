#include "lists.h"

/**
 * free_listint2 - frees a list listint_t
 * @head: address of pointer to head of list
 *
 * Return: Always void
 */
void free_listint2(listint_t **head)
{
	listint_t *node;
	listint_t *next;

	if (!head)
		return;

	node = *head;
	while (node)
	{
		next = node->next;
		free(node);
		node = next;
	}

	*head = NULL;
}


