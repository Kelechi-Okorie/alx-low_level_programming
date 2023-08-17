#include "lists.h"

/**
 * sum_dlistint  - returns sum of all the data (n) of a dlistint_t list
 * @head: head of the list
 *
 * Description: returns sum of all the data (n) of a dlistint_t list
 * Return: sum of all the data (n) in the list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *p;
	int n;

	n = 0;
	p = head;
	while (p)
	{
		n += p->n;
		p = p->next;
	}

	return (n);
}
