#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds node to end of list
 * @head: head of the list
 * @str: string to add to list
 *
 * Description: adds node to the end of the list
 * Return: address of new element on success,
 * NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *p;
	unsigned int n;

	n = 0;
	p = *head;

	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);

	while (str[n])
		n++;

	temp->str = strdup(str);
	temp->len = n;
	temp->next = NULL;

	if (p == NULL)
	{
		*head = temp;
		return (temp);
	}

	while (p->next)
		p = p->next;

	p->next = temp;

	return (temp);
}
