#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: the number to set bit of
 * @index: the index to set bit of
 *
 * Description: sets value of a bit to 1 at a given index
 * Return: 1 on success,
 * -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (1UL << index) | *n;

	return (1);
}
