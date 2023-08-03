#include "main.h"

/**
 * clear_bit - sets value of bit to 0 at a given index
 * @n: the value
 * @index: the index to clear
 *
 * Description: sets value of bit to 0 at a given index
 * Return: 1 on success, -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 63)
		return (-1);

	mask = 1;

	mask = ~(mask << index);

	*n = *n & mask;

	return (-1);
}
