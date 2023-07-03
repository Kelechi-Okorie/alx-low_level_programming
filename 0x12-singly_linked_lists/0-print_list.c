#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all elements of a list_t
 * @h: head of the list
 *
 * Description: prints all elements of list_t
 * Return: number of elements printed
 */
size_t print_list(const list_t *h)
{
	size_t n;

	n = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("%s\n", "[0] (nil)");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		n += 1;
	}

	return (n);
}
