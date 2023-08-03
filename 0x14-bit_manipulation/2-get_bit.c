#include "main.h"

/**
 * get_bit - returns value of a bit at a given index
 * @n: the number to check
 * @index: the index to return the bit of
 *
 * Description: returns value of a bit at a given index
 * Return: the value the bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask, bit;

	if (index > 63)
		return (-1);

	mask = n >> index;

	bit = mask & 1;

	return (bit);
}
