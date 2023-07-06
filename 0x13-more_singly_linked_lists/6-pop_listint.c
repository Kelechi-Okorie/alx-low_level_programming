#include "lists.h"

/**
 * pop_listint - deletes a node from listint_t and return the data (n)
 * @head: pointer to the head
 *
 * Description: deletes head node from listint_t and return its data(n)
 * Return: the deleted node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *p;
	int n;

	if (!head || !*head)
		return (0);

	p = *head;

	*head = p->next;
	n = p->n;

	free(p);

	return (n);
}
