#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of a listint_t
 * @h: head of the list
 *
 * Description: printsl all elements of a listint_t
 * Return: number of elements printed
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *p;
	size_t n;

	p = h;
	n = 0;

	while (p)
	{
		printf("%d\n", p->n);
		p = p->next;
		n++;
	}

	return (n);
}
