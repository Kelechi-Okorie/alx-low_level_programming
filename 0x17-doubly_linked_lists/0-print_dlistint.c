#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints a doubly linked list
 * @h: head of the list
 *
 * Description: prints a doubly linked list
 * Return: length of the doubly linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n;
	const dlistint_t *p;

	p = h;
	n = 0;

	if (h == NULL)
		return (n);

	while (p != NULL)
	{
		printf("%d\n", p->n);
		p = p->next;
		n++;
	}

	return (n);
}
