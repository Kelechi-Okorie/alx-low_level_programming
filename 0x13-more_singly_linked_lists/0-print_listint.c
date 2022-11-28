#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: pointer to head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	int count;

	if (!h)
		return (0);

	count = 0;
	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}

	return (count);
}
