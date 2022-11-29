#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at given position
 * @head: head pointer to the list
 * @idx: the index to insert the node
 * @n: the n memember of the node
 *
 * Return: address of new node on success. NULL otherwise
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *new;
	unsigned int i;

	temp = *head;
	i = 0;

	if (!head)
		return (NULL);

	while (i <= idx - 1 && temp->next)
	{
		temp = temp->next;
		i++;
	}

	if (i < idx - 1 || !(temp->next))
		return (NULL);

	new = (listint_t *)malloc(sizeof(listint_t));
	new->n = n;
	new->next = temp->next;
	temp->next = new;

	return (new);
}
