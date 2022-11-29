#include "lists.h"

/**
 * add_nodeint_end - adds new node at end of list
 * @head: head of list
 * @n: member n of the new node
 *
 * Return: pointer to new node if successful
 * NULL otherwise
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *new;

	temp = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;

	return (new);
}
