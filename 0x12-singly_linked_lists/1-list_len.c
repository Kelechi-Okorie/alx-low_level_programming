#include "lists.h"

/**
 * list_len - returns number of elements in a list
 * @h: pointer to head of the list
 *
 * Return: number of nodes in list
 */
size_t list_len(const list_t  *h)
{
	size_t n;

	n = 0;
	while (h)
	{
		h = h->next;
		n++;
	}

	return (n);
}
