#include "lists.h"

/**
 * sum_listint - retuns sum of all the list nodes
 * @head: head of the list
 *
 * Return: sum of the list elements if sucessfull
 * or 0 if empty list
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int n;

	temp = head;
	n = 0;

	if (!head)
		return (0);

	while (temp)
	{
		n += temp->n;
		temp = temp->next;
	}

	return (n);
}
