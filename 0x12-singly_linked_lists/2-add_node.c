#include "lists.h"

/**
 * add_node - adds a node at the beginning of a list
 * @head: beginning of the lsit
 * @str: string the str member of the node
 *
 * Return: Address of new node on success
 * NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next =  *head;
	*head = new;

	return (new);
}
