#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t
 * @head: head of the list
 * @str: the string member of the lsit
 *
 * Description: Adds a new node at the beginning of a list
 * Return: Address of new node on success, NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	unsigned int len;

	len = 0;
	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);

	temp->str = strdup(str);
	temp->next = *head;

	while (str[len])
		len++;

	temp->len = len;

	*head = temp;

	return (temp);
}
