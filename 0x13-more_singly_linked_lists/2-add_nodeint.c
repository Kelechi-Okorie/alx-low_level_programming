#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t
 * @head: head of the list
 * @n: n member of the list
 *
 * Description: adds a new node at the beginning of a listint_t
 * Return: address of new element on success,
 * NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (temp);
}
