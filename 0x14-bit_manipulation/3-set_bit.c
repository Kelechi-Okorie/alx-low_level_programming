#include "main.h"

/**
 * set_bit - sets value of bit to 1 at given index
 * @n: the value
 * @index: the index to set the bit
 *
 * Description: sets the value of a given bit to 1
 * Return: 1 on success, -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = 1;

	if (index > 63)
		return (-1);

	mask = mask << index;

	*n = *n | mask;

	return (1);
}
