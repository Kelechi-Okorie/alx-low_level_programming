#include "main.h"

/**
 * clear_bit - clears bit at a given index
 * @n: the number to clear
 * @index: the index to clear
 *
 * Description: clears bit at a given index
 * Return: 1 if successfull,
 * -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ~(1UL << index) & *n;

	return (1);
}
