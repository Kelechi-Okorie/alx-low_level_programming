#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t
 * @head: head of the list
 *
 * Description: frees a dlistint_t
 * Return: always void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *p, *q;

	p = q = head;
	while (q)
	{
		q = q->next;
		free(p);
		p = q;
	}
}
