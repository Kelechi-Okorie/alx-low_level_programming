#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a list
 * @head: head of the list
 * @index: the index to return
 *
 * Return: node at nth index if successfull, NULL otherwise
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	i = 0;

	temp = head;
	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (temp)
		return (temp);

	return (NULL);
}
