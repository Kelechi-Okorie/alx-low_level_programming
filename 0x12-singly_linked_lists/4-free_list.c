#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to head of the list
 *
 * Description: frees a list_t list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *p, *temp;

	p = head;

	while (p)
	{
		temp = p->next;
		free(p->str);
		free(p);
		p = temp;
	}
}
