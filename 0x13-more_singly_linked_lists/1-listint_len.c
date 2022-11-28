#include "lists.h"

/**
 * listint_len - returns number of elements of a list
 * @h: head of the list
 *
 * Return: number of elemets in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count;
	const listint_t *temp;

	count = 0;
	if (!h)
		return (0);

	temp = h;
	while (temp)
	{
		count++;
		temp = temp->next;
	}

	return (count);
}
