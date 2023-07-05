#include "lists.h"

/**
 * listint_len - returns number of elements in a list
 * @h: head of the list
 *
 * Description: returns number of elements in a list
 * Return: number of elements in a list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *p;
	size_t n;

	n = 0;

	p = h;

	while (p)
	{
		p = p->next;
		n++;
	}

	return (n);
}
