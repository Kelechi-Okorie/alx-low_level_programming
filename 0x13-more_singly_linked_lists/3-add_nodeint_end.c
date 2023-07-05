#include "lists.h"

/**
 * add_nodeint_end - adds new node at end of list
 * @head: head of list
 * @n: n member of the node
 *
 * Description: adds node to end of list
 * Return: address of new element on success,
 * NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *p;

	p = *head;

	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	while (p->next)
	{
		p = p->next;
	}

	p->next = temp;

	return (temp);
}
