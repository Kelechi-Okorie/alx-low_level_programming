#include "lists.h"

/**
 * get_nodeint_at_index - returns node at a given index
 * @head: start of list
 * @index: index to get node from
 *
 * Description: returns node at a given index
 * Return: node at a given index on success,
 * NULL otherwise
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	n = 0;

	if (!head)
		return (NULL);

	while (head && n < index)
	{
		head = head->next;
		n++;
	}

	if (n < index)
		return (NULL);

	return (head);
}
