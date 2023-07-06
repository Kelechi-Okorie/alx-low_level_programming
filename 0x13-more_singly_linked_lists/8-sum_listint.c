#include "lists.h"

/**
 * sum_listint - returns sum of all data (n) of a listint_t
 * @head: head of the list
 *
 * Description: returns sum of all data (n) of a listint_t
 * Return: sum of all data (n) of a listint_t
 */
int sum_listint(listint_t *head)
{
	int n;

	n = 0;

	while (head)
	{
		n += head->n;

		head = head->next;
	}

	return (n);
}
