#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given index
 * @head: head of the list
 * @index: the index to delete the node from
 *
 * Description: deletes the node at a given index
 * Return: 1 on success, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p, *prev, *next;
	unsigned int i;

	p = *head;
	i = 0;

	if (p == NULL)
		return (-1);

	while (p)
	{
		if (i == index)
			break;
		i++;
		p = p->next;
	}

	if (p == NULL)
		return (-1);

	prev = p->prev;
	next = p->next;

	if (prev)
		prev->next = next;
	if (next)
		next->prev = prev;

	if (prev == NULL)
		*head = next;

	return (1);
}
