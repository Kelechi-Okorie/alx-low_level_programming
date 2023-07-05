#include "lists.h"

/**
 * free_listint - frees a listint_t
 * @head: head of the list
 *
 * Description: frees a listint_t
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	if (!head)
		return;

	p = head;

	while (head)
	{
		p = head->next;
		free(head);
		head = p;
	}

}
