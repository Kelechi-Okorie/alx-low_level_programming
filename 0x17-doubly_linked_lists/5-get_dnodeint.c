#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t
 * @head: head of the list
 * @index: index to return
 *
 * Description: returns the nth node of a dlistint_t
 * Return: node at index n on success,
 * NULL otherwise
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *p;
	unsigned int i;

	i = 0;
	p = head;

	while (p)
	{
		if (i == index)
			return (p);

		i++;
		p = p->next;
	}

	return (NULL);
}
