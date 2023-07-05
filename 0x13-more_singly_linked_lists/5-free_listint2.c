#include "lists.h"

/**
 * free_listint2 - frees a listint_t and sets head to NULL
 * @head: address of head pionter
 *
 * Description: frees listint_t and sets head pointer to NULL
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *p, *q;

	p = *head;
	q = *head;

	if (!p)
		return;

	while (p)
	{
		p = p->next;
		free(q);
		q = p;
	}

	*head = NULL;
}

