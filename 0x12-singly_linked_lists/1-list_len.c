#include "lists.h"

/**
 * list_len - returns length of list
 * @h: head of the list
 *
 * Description: returns the length of list
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	const list_t *p;
	size_t n;

	p = h;
	n = 0;

	while (p)
	{
		n += 1;

		p = p->next;
	}

	return (n);
}

