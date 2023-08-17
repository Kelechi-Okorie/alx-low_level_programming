#include "lists.h"

/**
 * dlistint_len - returns number of elements in a doubly linked list
 * @h: head of the list
 *
 * Description: returns number of elements in a doubly linked list
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n;
	const dlistint_t *p;

	n = 0;
	p = h;

	while (p != NULL)
	{
		p = p->next;
		n++;
	}

	return (n);
}
