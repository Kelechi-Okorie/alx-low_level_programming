#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer to head fo the list
 *
 * Return: Always nothing
 */
void free_listint(listint_t *head)
{
	listint_t *node;
	listint_t *next;

	if (!head)
		return;

	node = head;

	while (node)
	{
		next = node->next;
		free(node);
		node = next;
	}
}
