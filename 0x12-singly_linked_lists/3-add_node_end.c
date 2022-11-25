#include "lists.h"

/**
 * add_node_end - adds a node at end of a list
 * @head: head pointer to the list
 * @str: string to add to str of the new node
 *
 * Return: address of new element on success
 * or NULL otherwise
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t  *tmp;

	tmp = *head;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new;
	return (new);
}
