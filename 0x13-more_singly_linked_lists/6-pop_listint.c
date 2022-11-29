#include "lists.h"

/**
 * pop_listint - deletes head node of a list
 * @head: address of pointer to head node
 *
 * Return: n member of the node or 0 if n does not exist
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!head || !*head)
		return (0);

	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);
	return (n);
}
