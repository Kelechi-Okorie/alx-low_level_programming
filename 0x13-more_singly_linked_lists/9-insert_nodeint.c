#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at a given index
 * @head: head of the list
 * @idx: index to insert node at
 * @n: the data (n) of the new node
 *
 * Description: inserts new node at a given index
 * Return: address of inserted node on success,
 * NULL otherwise
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *p, *q, *temp;

	i = 0;
	p = *head;

	temp = malloc(sizeof(listint_t));
	if (!head || !temp)
		return (NULL);
	temp->n = n;
	temp->next = NULL;

	if (idx == 0)
	{
		temp->next = p;
		p = temp;
		return (temp);
	}

	while (p && i < idx)
	{
		q = p;
		p = p->next;
		i++;
	}

	if (idx > i)
		return (NULL);

	if (!p || i <= idx)
	{
		p = temp;
		temp->next = NULL;
		return (temp);
	}

	q->next = temp;
	temp->next = p;

	return (temp);
}
